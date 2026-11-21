# whileLoopScript.sh

A simple Bash script demonstrating a `while` loop that counts from 1 to 10, printing each number with a short delay between iterations.

## What This Script Does

The script initializes a counter variable at `1` and repeatedly prints its value, incrementing it by `1` each time, until it exceeds `10`. Each number is printed half a second apart.

**Expected output:**
```
1
2
3
4
5
6
7
8
9
10
```
(printed one line at a time, with a 0.5 second pause between each)

## How to Run

1. Make the script executable:
   ```bash
   chmod +x whileLoopScript.sh
   ```
2. Run it:
   ```bash
   ./whileLoopScript.sh
   ```

## Line-by-Line Breakdown

### Variable Initialization
```bash
myvar=1
```
- Sets up a counter variable, `myvar`, starting at `1`. This will be the loop's control variable.

### The `while` Loop Condition
```bash
while [ $myvar -le 10 ]
do
  ...
done
```
- `while` repeatedly executes the block between `do` and `done` **as long as** the condition inside `[ ]` evaluates to true (exit code `0`).
- `-le` means **"less than or equal to"** — a numeric comparison operator (same family as `-eq`, `-gt`, etc.).
- So this reads as: *"while `myvar` is less than or equal to 10, keep looping."*
- Once `myvar` becomes `11`, the condition becomes false, and the loop exits, moving on to whatever comes after `done` (nothing, in this case — script ends).

### Inside the Loop Body

```bash
echo $myvar
```
- Prints the current value of `myvar` to the terminal.

```bash
myvar=$(($myvar + 1))
```
- This is **arithmetic expansion** in Bash: `$(( ... ))` evaluates a mathematical expression and returns the result.
- Here, it takes the current value of `myvar`, adds `1`, and reassigns the result back to `myvar`.
- This is the **increment step** — without it, `myvar` would stay `1` forever and the loop would never end (an infinite loop).
- Equivalent alternatives you might see elsewhere: `((myvar++))`, `((myvar += 1))`, or `let "myvar++"`.

```bash
sleep 0.5
```
- Pauses execution for `0.5` seconds before the next iteration.
- `sleep` accepts fractional seconds on most systems (Linux/macOS with GNU or BSD `sleep`), creating a visible half-second delay between each printed number — useful for watching the loop progress in real time rather than having all numbers print instantly.

### Loop Termination
```bash
done
```
- Marks the end of the loop body. Execution jumps back up to re-check the `while` condition. If still true, the body runs again; if false, the script continues past `done` (here, the script simply ends since there's nothing after it).

## Key Concepts

| Element | Purpose |
|---|---|
| `while [ condition ]` | Repeats the loop body as long as the condition is true |
| `-le` | Numeric "less than or equal to" comparison |
| `$(( expression ))` | Arithmetic expansion — used to increment the counter |
| `sleep 0.5` | Pauses execution for readability/pacing |
| `do` / `done` | Delimit the loop body (like `{ }` in other languages) |

## Why the Increment Step Is Critical

Loop counters must change on each iteration for a `while` loop to have a natural exit condition. If the line `myvar=$(($myvar + 1))` were removed or commented out, `myvar` would remain `1` forever, the condition `[ 1 -le 10 ]` would always be true, and the script would print `1` endlessly — an **infinite loop**. You'd need to manually interrupt it with `Ctrl + C`.

## Common Variations

- **Counting down instead of up:**
  ```bash
  myvar=10
  while [ $myvar -ge 1 ]
  do
    echo $myvar
    myvar=$(($myvar - 1))
  done
  ```
- **Using C-style syntax** (an alternative way to write the same loop):
  ```bash
  for ((myvar=1; myvar<=10; myvar++))
  do
    echo $myvar
  done
  ```
- **Removing the delay:** simply delete or comment out the `sleep 0.5` line if you want the loop to run as fast as possible.

## Notes & Caveats

- **Quoting:** For robustness in larger scripts, it's good practice to quote variables — e.g., `[ "$myvar" -le 10 ]` — to avoid errors if the variable is ever empty or contains unexpected characters. Not strictly necessary here since `myvar` is always a controlled numeric value, but it's a good habit.
- **`sleep` fractional support:** Fractional values like `0.5` work with GNU `sleep` (standard on Linux) and modern BSD/macOS `sleep`. Some minimal/embedded shells may only support whole-number seconds.
- **Infinite loop risk:** Always double-check that the loop's condition variable is actually being updated inside the loop body — this is the most common bug in `while` loops.
