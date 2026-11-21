# IfStatementScript.sh

A beginner-friendly Bash script that demonstrates common `if` statement patterns: numeric comparisons, file existence checks, and command existence checks (with an auto-install fallback).

## What This Script Does

The script runs through four independent examples, each showcasing a different use of `if`:

1. **Numeric equality check** — tests whether a variable equals a specific number.
2. **Numeric equality with else branch** — same idea, but demonstrates the `else` clause when the condition is false.
3. **Numeric greater-than check** — tests whether a variable is greater than a threshold.
4. **File existence check** — tests whether a file exists in the current directory.
5. **Command existence check** — tests whether a program (`htop`) is installed, and installs it via `apt` if it isn't, then runs it.

## Prerequisites

- A Linux (or WSL/macOS) environment with Bash installed.
- `sudo` privileges (needed only if `htop` is not already installed, since the script will attempt `apt install`).
- `apt` package manager (Debian/Ubuntu-based systems). If you're on a different distro (e.g., Fedora, Arch), the auto-install line will fail and you'd need to adjust it (see [Notes](#notes--caveats)).

## How to Run

1. Make the script executable:
   ```bash
   chmod +x IfStatementScript.sh
   ```
2. Run it:
   ```bash
   ./IfStatementScript.sh
   ```

## Line-by-Line Breakdown

### Variable Setup
```bash
i=20
commandName=htop
```
- `i` is set to `20`, used in the numeric comparison examples.
- `commandName` holds `"htop"`, the program checked/installed later.

### Example 1 — Equality Check (`-eq`)
```bash
if [ $i -eq 20 ]
then
    echo "The condition is true."
fi
```
- `-eq` means "equal to" (used for **numbers**, not strings).
- Since `i=20`, this prints: `The condition is true.`

### Example 2 — Equality Check with `else`
```bash
if [ $i -eq 30 ]
then
    echo "Variable is equal to 30"
else
   echo "Variable is eqaul to $i"
fi
```
- Checks if `i` equals `30`. It doesn't (it's `20`), so the `else` branch runs.
- Output: `Variable is eqaul to 20` *(note: "eqaul" is a typo for "equal" in the script — harmless, but worth fixing if you want clean output)*.
- `fi` always closes an `if` block (it's `if` spelled backwards — a Bash convention).

### Example 3 — Greater Than Check (`-gt`)
```bash
if [ $i -gt 10 ]
then
   echo "Variable is greater than 10"
else
   echo "Variable is not greater than 10"
fi
```
- `-gt` means "greater than."
- Since `20 > 10`, output: `Variable is greater than 10`.

### Example 4 — File Existence Check (`-f`)
```bash
if [  -f myfile1 ]
then
   echo "myfile1 exists"
else
   echo "myfile1 does not exist"
fi
```
- `-f` tests whether `myfile1` exists **in the current working directory** *and* is a regular file (not a directory).
- If you run the script from a folder that doesn't contain a file named `myfile1`, it will print `myfile1 does not exist`.
- To test the "exists" branch, create the file first: `touch myfile1`.

### Example 5 — Command Existence Check + Auto-Install
```bash
if command -v $commandName
then
   echo "$commandName exist lets run it"
else
   echo "$commandName does not exist lets install it"
   sudo apt update && sudo apt install -y $commandName
fi

$commandName
```
- `command -v <name>` checks whether a program/command is available in your `$PATH`. It doesn't use square brackets because it's not the `test` command — it's a shell builtin.
- If `htop` is found, it announces that and proceeds.
- If not found, it updates package lists and installs `htop` via `apt`.
- Finally, regardless of which branch ran, the script executes `$commandName` (i.e., launches `htop`).

## Comparison Operators Reference

| Operator | Meaning              | Used For |
|----------|----------------------|----------|
| `-eq`    | Equal to             | Numbers  |
| `-ne`    | Not equal to         | Numbers  |
| `-gt`    | Greater than         | Numbers  |
| `-lt`    | Less than            | Numbers  |
| `-ge`    | Greater than or equal| Numbers  |
| `-le`    | Less than or equal   | Numbers  |
| `-f`     | File exists and is a regular file | Files |
| `-d`     | Directory exists     | Files    |
| `-e`     | File/directory exists (any type) | Files |
| `=`      | Equal to             | Strings  |
| `!=`     | Not equal to         | Strings  |

## Notes & Caveats

- **Spacing matters:** `[` is actually a command in Bash, so it requires a space after `[` and before `]` — e.g., `[ -f myfile1 ]`, not `[-f myfile1]`.
- **Typo:** "eqaul" in Example 2's output message is a spelling mistake for "equal." Purely cosmetic — doesn't affect functionality.
- **Package manager assumption:** The auto-install line uses `apt`, which is specific to Debian/Ubuntu-based systems. On Fedora/RHEL, replace with `sudo dnf install -y htop`; on Arch, use `sudo pacman -S htop`.
- **`command -v` vs brackets:** Notice Example 5 doesn't use `[ ]` at all — `command -v` returns its own exit status directly, so it can be used as the `if` condition on its own.
- **Running `htop` at the end:** `htop` is an interactive terminal program. Running this script will open it and take over your terminal until you quit (press `q`).
- **File existence test location:** `-f myfile1` looks in the directory you're running the script *from*, not necessarily the directory the script itself is stored in — these can differ if you `cd` elsewhere before running it.

## Suggested Improvements

- Fix the "eqaul" typo.
- Quote your variables (e.g., `"$i"`, `"$commandName"`) to avoid word-splitting issues, especially if values might contain spaces.
- Add a check for the OS/package manager before deciding how to install `htop`.
- Add comments above each `if` block explaining the operator used (a few are already present in the original script).
