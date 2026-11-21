# Managing Bash Scripts in Linux: Storage, Automation, and PATH Setup

This README covers three practical topics for working with your own shell scripts on Linux:

1. **Where to store your scripts**
2. **How to automate them** (run on a schedule or on boot)
3. **How to add your script's location to the `PATH` environment variable**, so you can run it from anywhere by name

---

## Part 1: Where to Store Your Scripts

Where you put a script depends on **who should be able to run it** and **whether it's just for you or system-wide**.

### Option A — Personal Scripts (most common for individual users)

Create a dedicated folder in your home directory:

```bash
mkdir -p ~/bin
# or, a common convention:
mkdir -p ~/scripts
```

- `~/bin` is a widely recognized convention — many Linux distros already check for it and add it to `PATH` automatically if it exists (more on this in Part 3).
- `~/scripts` is a more descriptive alternative if you prefer to keep it separate from `~/bin`.
- Move or copy your script here:
  ```bash
  mv myscript.sh ~/bin/
  chmod +x ~/bin/myscript.sh
  ```

### Option B — System-Wide Scripts (available to all users)

If multiple users on the machine need to run the script, place it in one of these standard system directories:

| Directory | Purpose |
|---|---|
| `/usr/local/bin` | Recommended for locally-installed scripts/programs not managed by the package manager. Usually already in every user's `PATH`. |
| `/usr/bin` | Reserved for scripts/binaries installed by the distro's package manager — avoid placing personal scripts here. |
| `/opt/<appname>/` | Used for larger, self-contained applications/scripts, often with their own subdirectories. |

Example:
```bash
sudo mv myscript.sh /usr/local/bin/myscript
sudo chmod +x /usr/local/bin/myscript
```
(Note: dropping the `.sh` extension is common for system-wide tools, since users just type the command name.)

### Option C — Scripts Tied to a Specific Project

If the script is part of a project (e.g., a Git repository), just keep it inside that project's directory structure — no need to move it anywhere special. You'd typically run it with a relative or explicit path:
```bash
./scripts/deploy.sh
```

---

## Part 2: How to Automate a Script

There are two main approaches depending on what "automate" means for your use case: **running on a schedule** (cron) or **running once at boot/login** (systemd or shell startup files).

### Option A — Scheduled Execution with `cron`

`cron` is the standard Linux time-based job scheduler. It runs commands/scripts automatically at specified times or intervals.

1. Open your personal crontab for editing:
   ```bash
   crontab -e
   ```
   (First time you run this, it may ask you to choose an editor — `nano` is beginner-friendly.)

2. Add a line specifying **when** to run and **what** to run:
   ```
   */5 * * * * /home/yourusername/bin/myscript.sh
   ```
   This example runs the script every 5 minutes.

3. **Understanding cron's time syntax** (five fields, each separated by a space):

   ```
   minute  hour  day-of-month  month  day-of-week   command
   0-59    0-23  1-31          1-12   0-6 (Sun=0)
   ```

   | Example | Meaning |
   |---|---|
   | `0 9 * * *` | Every day at 9:00 AM |
   | `30 18 * * 1-5` | 6:30 PM, Monday through Friday |
   | `0 0 1 * *` | Midnight on the 1st of every month |
   | `*/15 * * * *` | Every 15 minutes |
   | `@reboot` | Runs once, at system startup (special cron shorthand) |

4. Save and close the editor — cron automatically picks up the new schedule.

5. To view your current scheduled jobs:
   ```bash
   crontab -l
   ```

6. **Important:** Always use the **full absolute path** to your script inside cron entries (e.g., `/home/yourusername/bin/myscript.sh`, not `myscript.sh` or `~/bin/myscript.sh`). Cron jobs run with a minimal environment and don't expand `~` or necessarily have your normal `PATH`, so relative paths and `~` often fail silently.

7. **Logging output (recommended):** Since cron jobs run in the background with no terminal, redirect output to a log file so you can debug issues:
   ```
   */5 * * * * /home/yourusername/bin/myscript.sh >> /home/yourusername/logs/myscript.log 2>&1
   ```
   (`2>&1` redirects error output into the same log file as standard output.)

### Option B — Run Once at Boot or Login

**Using `cron`'s `@reboot`:**
```
@reboot /home/yourusername/bin/myscript.sh
```

**Using `systemd` (more robust, recommended for services/long-running scripts):**

1. Create a service file:
   ```bash
   sudo nano /etc/systemd/system/myscript.service
   ```
2. Add:
   ```ini
   [Unit]
   Description=My Custom Script

   [Service]
   ExecStart=/home/yourusername/bin/myscript.sh
   User=yourusername

   [Install]
   WantedBy=multi-user.target
   ```
3. Enable and start it:
   ```bash
   sudo systemctl daemon-reload
   sudo systemctl enable myscript.service
   sudo systemctl start myscript.service
   ```
4. Check its status/logs:
   ```bash
   systemctl status myscript.service
   journalctl -u myscript.service
   ```

`systemd` is generally preferred over `@reboot` cron for anything that needs to keep running, restart on failure, or depend on other services being ready first.

### Option C — Run on Every New Terminal/Login

If you want a script (or part of it) to run every time you open a new shell session, add a call to it in one of your shell's startup files:

- `~/.bashrc` — runs for every new interactive Bash shell.
- `~/.bash_profile` or `~/.profile` — runs once at login.

Example, added to `~/.bashrc`:
```bash
/home/yourusername/bin/myscript.sh
```

---

## Part 3: Adding Your Script's Location to `PATH`

The `PATH` environment variable is a colon-separated list of directories that the shell searches through whenever you type a command name. Adding your script's folder to `PATH` lets you run it from **anywhere**, just by typing its name — no `./` or full path needed.

### Step 1 — Check Your Current `PATH`

```bash
echo $PATH
```
Example output:
```
/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/home/yourusername/.local/bin
```

### Step 2 — Add Your Script's Directory to `PATH`

Assuming your scripts live in `~/bin` (or `~/scripts`, or anywhere else you chose in Part 1):

1. Open your shell's configuration file. For Bash, this is usually `~/.bashrc` (for interactive shells) — some setups also use `~/.bash_profile` or `~/.profile` for login shells:
   ```bash
   nano ~/.bashrc
   ```

2. Add this line at the end of the file:
   ```bash
   export PATH="$HOME/bin:$PATH"
   ```
   - `$HOME/bin` — the directory you want to add (adjust to match wherever your scripts actually live).
   - `:$PATH` — appends your new directory *in front of* the existing `PATH` value, so it's searched first (and preserves everything already in `PATH`).
   - `export` makes the variable available to child processes (any program/script launched from this shell), not just the current shell itself.

3. Save the file and reload it so the change takes effect in your current terminal session:
   ```bash
   source ~/.bashrc
   ```
   (Alternatively, just close and reopen your terminal.)

4. Confirm it worked:
   ```bash
   echo $PATH
   ```
   You should now see your directory listed.

### Step 3 — Run Your Script by Name

Once your script's directory is in `PATH` **and** the script is executable (`chmod +x`), you can run it from any location, from just its filename:

```bash
myscript.sh
```

instead of needing:
```bash
./myscript.sh
# or
/home/yourusername/bin/myscript.sh
```

**Tip:** If you drop the `.sh` extension and rename the file to just `myscript`, it behaves like a normal system command — e.g., `myscript` instead of `myscript.sh`, which feels more like using a built-in tool.

### System-Wide `PATH` Changes (all users, not just you)

If you placed the script in a shared location like `/usr/local/bin`, you often don't need to do anything — that directory is included in the default `PATH` on most distros already (check with `echo $PATH`).

To add a **custom** directory to `PATH` for **all users** on the system, create a new file in `/etc/profile.d/`:
```bash
sudo nano /etc/profile.d/custom-path.sh
```
Add:
```bash
export PATH="/opt/myapp/bin:$PATH"
```
Save, then it takes effect for all users on their next login (or `source /etc/profile.d/custom-path.sh` for the current session).

---

## Quick Reference Summary

| Goal | What to Do |
|---|---|
| Store a personal script | `~/bin/` or `~/scripts/` |
| Store a system-wide script | `/usr/local/bin/` |
| Run script every N minutes/hours | `cron` — edit with `crontab -e` |
| Run script once at boot | `cron @reboot` or a `systemd` service |
| Run script on every login/new shell | Add a call to it in `~/.bashrc` or `~/.bash_profile` |
| Run script from anywhere by name | Add its directory to `PATH` via `~/.bashrc` (personal) or `/etc/profile.d/` (system-wide) |

## Common Pitfalls to Avoid

- **Forgetting `chmod +x`:** A script won't run (even with correct `PATH` or cron setup) unless it has execute permission.
- **Using relative paths or `~` in cron jobs:** Always use full absolute paths inside `crontab` entries — cron's environment is minimal and doesn't expand `~`.
- **Not reloading `~/.bashrc` after editing:** Changes to `PATH` (or anything in `~/.bashrc`) only apply to *new* shell sessions unless you `source` the file manually.
- **Editing `PATH` incorrectly:** Always append/prepend to the *existing* `$PATH` (e.g., `export PATH="$HOME/bin:$PATH"`) rather than overwriting it entirely (e.g., `export PATH="$HOME/bin"`) — the latter would break access to standard system commands like `ls`, `cd`, etc.
- **Name collisions:** If you name your script the same as an existing system command (e.g., `test`, `ls`), it can shadow or conflict with that command depending on `PATH` order. Choose distinct, descriptive script names.
