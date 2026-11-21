# Linux `at` Command – Scheduling Jobs

## 1. Objective

This class demonstrates how to use the Linux `at` command to schedule a Bash script for **one-time execution**.

The following commands are covered:

- `at` – schedule a job
- `atq` – view pending jobs
- `atrm` – remove a scheduled job
- `atd` – daemon responsible for executing scheduled jobs

---

## 2. `at` Command

The `at` command schedules a command or script to run once at a specified time.

### Basic Syntax

```bash
at TIME
```

For example:

```bash
at 22:51
```

After running the command, enter the command/script to execute and press `Ctrl+D`.

---

## 3. Scheduling a Script Using `-f`

Instead of entering the commands interactively, a script can be supplied using the `-f` option.

### Syntax

```bash
at TIME -f SCRIPT_PATH
```

Example:

```bash
at 22:51 -f ./SchedulingJobScript.sh
```

Output:

```text
warning: commands will be executed using /bin/sh
job 1 at Fri Aug 21 22:51:00 2026
```

Here:

- `22:51` → scheduled execution time
- `-f` → read commands from the specified file
- `SchedulingJobScript.sh` → script to execute
- `job 1` → job ID assigned by `at`

---

## 4. Example Script

Example `SchedulingJobScript.sh`:

```bash
#!/bin/bash

echo "The script run at time:$(date)" >> job_result.log
```

Make the script executable:

```bash
chmod +x SchedulingJobScript.sh
```

Schedule it:

```bash
at 22:51 -f ./SchedulingJobScript.sh
```

After 10:51 PM, check the result:

```bash
cat job_result.log
```

Example output:

```text
The script run at time:Fri Aug 21 10:51:00 PM IST 2026
```

---

## 5. Checking Scheduled Jobs with `atq`

Use:

```bash
atq
```

Example:

```text
2    Fri Aug 21 22:53:00 2026 a ravi-parkash
```

The fields represent:

| Field | Meaning |
|---|---|
| `2` | Job ID |
| `Fri Aug 21` | Scheduled date |
| `22:53:00` | Scheduled time |
| `a` | Queue |
| `ravi-parkash` | User who scheduled the job |

### Important

`atq` displays only **pending jobs**.

After a job has executed successfully, it is automatically removed from the queue.

Therefore, if you execute:

```bash
atq
```

after the scheduled time and see no output, it can simply mean that the job has already executed.

---

## 6. Removing a Scheduled Job

To cancel a pending job, use `atrm` followed by the job ID.

Example:

```bash
atrm 2
```

Verify that it has been removed:

```bash
atq
```

If the job was successfully removed, it will no longer appear in the queue.

---

## 7. Scheduling with Relative Time

`at` can also schedule jobs relative to the current time.

### After 5 minutes

```bash
at now + 5 minutes -f ./SchedulingJobScript.sh
```

### After 1 hour

```bash
at now + 1 hour -f ./SchedulingJobScript.sh
```

---

## 8. Scheduling for Tomorrow

Example:

```bash
at tomorrow 10:00 AM -f ./SchedulingJobScript.sh
```

---

## 9. One-Time Job vs Recurring Job

`at` is mainly used for **one-time jobs**.

| Feature | `at` | `cron` |
|---|---|---|
| Run once | Yes | Not its primary purpose |
| Run every day | No | Yes |
| Run every hour | No | Yes |
| Run every 5 minutes | No | Yes |
| Suitable for one-time scheduling | Yes | No |
| Suitable for recurring tasks | No | Yes |

Example:

```text
at
 ↓
Run once at a specified time

cron
 ↓
Run repeatedly according to a schedule
```

---

## 10. `atd` Service

The `at` command uses the `atd` daemon to execute scheduled jobs.

Check its status:

```bash
systemctl status atd
```

Start it if required:

```bash
sudo systemctl start atd
```

Enable it to start automatically during boot:

```bash
sudo systemctl enable atd
```

On Ubuntu/Debian, install `at` if it is not already installed:

```bash
sudo apt install at
```

---

## 11. Important: Use Absolute Paths

When scheduling scripts using `at`, it is safer to use **absolute paths**.

For example:

```bash
at 22:51 -f /home/ravi-parkash/scripts/SchedulingJobScript.sh
```

Also prefer an absolute path for output files:

```bash
echo "Script executed at $(date)" >> /home/ravi-parkash/scripts/job_result.log
```

Instead of:

```bash
echo "Script executed at $(date)" >> job_result.log
```

### Why?

`at` executes the job later in a non-interactive environment. The working directory and environment may not be the same as your current terminal session.

Using absolute paths makes the script more reliable.

---

## 12. Complete Practical Example

### Step 1 – Create the script

```bash
nano SchedulingJobScript.sh
```

Add:

```bash
#!/bin/bash

echo "The script run at time:$(date)" >> /home/ravi-parkash/scripts/job_result.log
```

### Step 2 – Make it executable

```bash
chmod +x SchedulingJobScript.sh
```

### Step 3 – Schedule the script

```bash
at 22:53 -f ./SchedulingJobScript.sh
```

### Step 4 – Check the job

```bash
atq
```

### Step 5 – Wait until the scheduled time

After the job executes:

```bash
atq
```

The job should no longer appear.

### Step 6 – Check the script output

```bash
cat /home/ravi-parkash/scripts/job_result.log
```

---

## 13. Useful Commands Summary

```bash
# Schedule a script
at 22:51 -f ./SchedulingJobScript.sh

# Display pending jobs
atq

# Remove/cancel a job
atrm JOB_ID

# Schedule after 5 minutes
at now + 5 minutes -f ./SchedulingJobScript.sh

# Check atd service
systemctl status atd
```

---

## 14. Key Learning

The most important concept is:

```text
                 Linux at
                    |
          Schedule a one-time job
                    |
          +---------+---------+
          |         |         |
         at        atq       atrm
          |         |         |
      Schedule    View      Remove
       job       pending     job
                   jobs
```

`at` is useful when you need a command or Bash script to execute **once at a particular time**, while `cron` is better for **repeated/recurring jobs**.
