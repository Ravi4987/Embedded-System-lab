# Understanding Exit Codes in Bash — with `ExampleScript.sh` & `ExitCodeScript.sh`

This README first explains what exit codes are and how they work in Bash, then walks through two example scripts that demonstrate exit code behavior in practice.

---

## Part 1: What Is an Exit Code?

Every command you run in a shell — whether it's a built-in like `echo`, a test like `[ -d /etc ]`, or an external program like `apt` — finishes by returning a small number called an **exit code** (also called exit status or return code) to the shell.

- **`0`** always means **success**.
- **Any non-zero value (1–255)** means **failure**, and different programs use different non-zero numbers to indicate *different kinds* of failure.

### How to See the Exit Code

Bash stores the exit code of the **most recently executed command** in the special variable `$?`.

```bash
ls /etc
echo $?   # prints 0 if /etc exists and ls succeeded
```

```bash
ls /this/does/not/exist
echo $?   # prints 2 (or another non-zero code) because ls failed
```

### The Critical Gotcha: `$?` Only Holds the *Last* Command's Exit Code

This is the single most important thing to understand, and it's the whole point of both scripts below.

```bash
[ -d /nonexistent ]   # this fails, exit code would be 1
echo "some message"   # this SUCCEEDS, so $? becomes 0
echo $?                # prints 0 — NOT the exit code of the [ -d ] test!
```

Because `$?` gets overwritten every time *any* command runs — including `echo` itself — you must capture or check `$?` **immediately after** the command whose result you actually care about. If you run another command (even a harmless `echo`) in between, the original exit code is lost.

### How `if` Uses Exit Codes

This is also key to understanding both scripts: **`if` doesn't evaluate "true/false" the way other languages do — it checks the exit code of the command that follows it.**

```bash
if [ -d /etc ]
then
   echo "yes"
fi
```

Here, `[ -d /etc ]` is itself a command (the `test` command). If it exits with `0`, the `then` branch runs. If it exits non-zero, the `else` branch (or nothing) runs. `if` is really just "if this command's exit code is 0, do this; otherwise do that."

### Manually Setting an Exit Code

You can control a script's own exit code using the `exit` command followed by a number:

```bash
exit 0     # success
exit 1     # generic failure
exit 100   # custom code — whatever you decide it means
```

- Calling `exit` **immediately terminates the script** — nothing after it runs.
- After the script exits, its caller (another script, or your terminal) can check `$?` to see which exit code it returned.
- Exit codes are conventionally 0–255. Custom non-zero values (like `100` or `200`) are often used to signal *specific* failure/success scenarios to whatever calls the script.

---

## Part 2: `ExampleScript.sh` — Exit Codes and the `$?` Gotcha

```bash
#!/bin/bash

directory=\txy

if [ -d $directory ]
then
    echo "The directory $directory exist"
else
   echo "The directory $directory does not exit"
fi

echo "The exit code for above is $?"
```

### What's Happening

1. **`directory=\txy`** — this sets the variable `directory` to the literal string `\txy`, an intentionally fake path, so the `-d` test is guaranteed to fail. (The commented-out line `directory=/etc` shows what you'd use to make the test *succeed* instead.)

2. **`if [ -d $directory ]`** — tests whether `\txy` is a directory. Since it doesn't exist, this test fails (non-zero exit code), so the `else` branch runs and prints "does not exist."

3. **`echo "The exit code for above is $?"`** — this is the script's built-in lesson. At this point, `$?` does **not** reflect the `[ -d ... ]` test anymore. Why? Because the `echo` command *inside* the `if`/`else` block already ran and succeeded, overwriting `$?` with `0`. So this line will always print `0`, **regardless of whether the directory existed or not** — which is misleading if you don't understand the gotcha from Part 1.

### The Second `if` Block — Checking `$?` in the Right Place

```bash
if [ -d $directory ]
then
   echo  "The exit code is $?"
   echo "The directory $directory exist"
else
      echo  "The exit code is $?"
    echo "The directory $directory does not exist"
fi
```

This block demonstrates the fix: `echo "The exit code is $?"` is the *first* line inside each branch, so at that point `$?` still reflects the exit code of the `[ -d $directory ]` test that triggered the branch (nothing has run in between yet). Here it correctly shows the test's real exit code (`0` for success, `1` for failure) — contrasting with the first block, where an extra command ran *before* `$?` was checked, wiping out the result.

**Takeaway:** if you want an accurate `$?`, check it as the *very next command* after the one you care about.

### The Third `if` Block — Custom Exit Codes

```bash
if [ -d $directory ]
then
   echo "The directory $directory exist"
   exit 100
else
   echo "The directory $directory does not exit"
   exit 200
fi
```

- If the directory exists → prints the message, then `exit 100` terminates the script with exit code `100`.
- If the directory doesn't exist (the case here, since `directory=\txy`) → prints the message, then `exit 200` terminates the script with exit code `200`.
- Once `exit` runs, the script stops immediately.

### How to Verify the Final Exit Code

Since the script exits with a custom code, you check it from **outside**, right after running the script:

```bash
./ExampleScript.sh
echo $?
```

Given `directory=\txy` (doesn't exist), this will print `200`.

---

## Part 3: `ExitCodeScript.sh` — Using Exit Codes to Detect Install Failure

```bash
#!/bin/bash

package=notExist

sudo apt install $package >> package_install_results.log

if [ $? -eq 0 ]
then 
   echo "Package installation was succesfull"
   echo "The new command is available here"
   which $package
else
   echo "$package installation was not succesfull" >> package_install_failure.log
fi
```

### What's Happening

1. **`package=notExist`** — deliberately set to a package name that doesn't exist in any repository, so the install is guaranteed to fail. (The commented-out `package=htop` shows the "success" scenario — you'd first need to uninstall `htop` for that test to be meaningful, since `apt install` on an already-installed package also "succeeds.")

2. **`sudo apt install $package >> package_install_results.log`**
   - Attempts to install the package.
   - `>>` redirects (appends) the command's standard output to `package_install_results.log`, rather than printing it to your terminal. This keeps a running log of install attempts across multiple script runs (append mode preserves prior contents; a single `>` would overwrite the file each time).
   - Note: only *standard output* is redirected here — error messages (standard error) from `apt` would still print to the terminal unless also redirected with `2>>` or `&>>`.

3. **`if [ $? -eq 0 ]`** — this is the important line, and it's placed *correctly* (right after the command it's checking): it captures the exit code of the `apt install` command that just ran.
   - `0` → installation succeeded.
   - Non-zero → installation failed (e.g., package not found, permission denied, network issue).

4. **Success branch:**
   ```bash
   echo "Package installation was succesfull"
   echo "The new command is available here"
   which $package
   ```
   - Confirms success and uses `which $package` to show the filesystem path of the newly installed command.

5. **Failure branch:**
   ```bash
   echo "$package installation was not succesfull" >> package_install_failure.log
   ```
   - Instead of printing to the terminal, this **appends the failure message to a separate log file**, `package_install_failure.log`, keeping a persistent record of failed install attempts.

### Expected Behavior With `package=notExist`

Since `notExist` isn't a real package, `apt install` will fail, so:
- `package_install_results.log` will contain `apt`'s output/error about not finding the package.
- `$?` will be non-zero.
- The `else` branch runs, appending a failure line to `package_install_failure.log`.
- Nothing prints to your terminal except whatever `sudo apt install` itself sends to standard error (since only stdout was redirected).

---

## Key Concepts Comparison

| Concept | `ExampleScript.sh` | `ExitCodeScript.sh` |
|---|---|---|
| Exit code source | `[ -d ... ]` test command | `sudo apt install` command |
| Checks `$?` correctly? | Demonstrates both wrong (delayed) and right (immediate) usage | Yes — checked immediately after the command |
| Custom exit codes | Yes (`exit 100` / `exit 200`) | No — only checks/reacts to the exit code, doesn't set one |
| Logging | None (prints to terminal) | Yes — logs both output and failure to separate files |

---

## General Best Practices Highlighted by These Scripts

1. **Check `$?` immediately** after the command you care about — any intervening command (even `echo`) will overwrite it.
2. **Use `exit <code>` deliberately** to signal success/failure/specific outcomes to whatever calls your script.
3. **Redirect output to logs** (`>>` to append, `>` to overwrite) when you want a persistent record instead of (or in addition to) terminal output.
4. **Remember `2>>` for errors** — by default, only standard output (`stdout`) is redirected with `>>`; error messages (`stderr`) need their own redirection if you want those captured too.
5. **Quote your variables** (e.g., `"$directory"`, `"$package"`) in real-world scripts to avoid issues if the value contains spaces or special characters.


