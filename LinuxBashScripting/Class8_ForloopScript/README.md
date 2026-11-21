# forloopScript.sh

## Description

`forloopScript.sh` is a simple Bash script that demonstrates the use of a `for` loop.

The script:

1. Starts a loop variable `i` at 1.
2. Runs the loop through 10.
3. Prints the value of `i`.
4. Waits for 1 second after each iteration.
5. Prints a message after the loop finishes.

The loop is implemented using Bash brace expansion:

```bash
for i in {1..10}
do
    echo $i
    sleep 1
done
```

## Requirements

- Linux or another system with Bash
- Bash shell

## How to Use

### 1. Make the script executable

```bash
chmod +x forloopScript.sh
```

### 2. Run the script

```bash
./forloopScript.sh
```

You can also run it directly with Bash:

```bash
bash forloopScript.sh
```

## Expected Output

The script prints the numbers from 1 to 10, with approximately one second between each number:

```text
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
We are outside of for loop
```

## Explanation

### Shebang

```bash
#!/bin/bash
```

This tells the system to execute the script using Bash.

### For Loop

```bash
for i in {1..10}
do
    echo $i
    sleep 1
done
```

`i` is the loop variable. Bash expands `{1..10}` into the sequence from 1 through 10.

`echo $i` prints the current value of `i`.

`sleep 1` pauses execution for one second during each iteration.

### Code Outside the Loop

```bash
echo "We are outside of for loop"
```

This command is executed after the `for` loop has completed.

## Shell Scripting Concepts Practiced

This example helps practice:

- Bash shebang
- Variables
- `for` loops
- Brace expansion
- `echo`
- `sleep`
- `do` / `done`
- Understanding code execution inside and outside a loop

## Possible Exercises

Try modifying the script to:

1. Count from 10 down to 1.
2. Print only even numbers.
3. Print only odd numbers.
4. Change the delay from 1 second to 2 seconds.
5. Ask the user for the ending number instead of always using 10.

## Author

Embedded Linux / Shell Scripting Practice
