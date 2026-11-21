# Bash `case` Statement

## 1. Introduction

The Bash `case` statement is used when we need to select one action from multiple possible choices.

It is especially useful for:

- Menu-driven scripts
- User choices
- Command-line options
- Selecting different operations
- Service management scripts
- Embedded Linux utility scripts

Instead of writing many `if`, `elif`, and `else` conditions, we can use a `case` statement.

---

## 2. Basic Syntax

The basic syntax of a Bash `case` statement is:

```bash
case "$variable" in
    pattern1)
        commands
        ;;
    pattern2)
        commands
        ;;
    pattern3)
        commands
        ;;
    *)
        default_commands
        ;;
esac
```

Important keywords:

```text
case    -> Starts the case statement
in      -> Starts the list of patterns
)       -> Ends a pattern
;;      -> Ends that case option
*       -> Default option
esac    -> Ends the case statement
```

---

## 3. Script Example

Your script asks the user to select a Linux distribution:

```bash
echo "What is your favourite linux distribution"
echo "Select appropriate choice"
echo "1. Arch"
echo "2. CentOS"
echo "3. Debian"
echo "4. Ubuntu"
echo "5. Exit Script"
```

The user enters a choice using:

```bash
read choice
```

Then the value of `choice` is passed to the `case` statement.

---

## 4. Case Statement in the Script

Your script contains:

```bash
case $choice in
    1) echo "You have chosen Arch";;
    2) echo "You have chosen CentOS";;
    3) echo "You have chosen Debian";;
    4) echo "You have chosen Ubuntu";;
    5) finished=1;;
    *) echo "Not valid choice"
esac
```

Each value of `$choice` is matched against the available patterns.

For example, if the user enters:

```text
1
```

then:

```bash
1) echo "You have chosen Arch";;
```

is executed.

If the user enters:

```text
3
```

then:

```bash
3) echo "You have chosen Debian";;
```

is executed.

---

## 5. Understanding `;;`

The `;;` marks the end of a particular `case` option.

Example:

```bash
1)
    echo "You selected Arch"
    ;;
```

Think of `;;` as:

> "This case option is finished."

Without `;;`, Bash will not correctly terminate that case branch.

---

## 6. Default Case Using `*`

Your script uses:

```bash
*)
    echo "Not valid choice"
```

The `*` is used as the default pattern.

It is executed when none of the previous patterns match.

For example, if the user enters:

```text
10
```

there is no `10)` option, so:

```bash
*)
    echo "Not valid choice"
```

is executed.

This is similar to the `else` part of an `if-else` statement.

---

## 7. `case` vs `if-elif`

The same logic could be written using `if`:

```bash
if [ "$choice" -eq 1 ]; then
    echo "You have chosen Arch"
elif [ "$choice" -eq 2 ]; then
    echo "You have chosen CentOS"
elif [ "$choice" -eq 3 ]; then
    echo "You have chosen Debian"
elif [ "$choice" -eq 4 ]; then
    echo "You have chosen Ubuntu"
else
    echo "Not valid choice"
fi
```

With multiple fixed choices, `case` is generally easier to read:

```bash
case "$choice" in
    1) echo "You have chosen Arch";;
    2) echo "You have chosen CentOS";;
    3) echo "You have chosen Debian";;
    4) echo "You have chosen Ubuntu";;
    *) echo "Not valid choice";;
esac
```

---

## 8. How the Loop Works in Your Script

Your script initializes:

```bash
finished=0
```

Then it starts:

```bash
while [ $finished -ne 1 ]
do
    ...
done
```

So the menu keeps appearing while `finished` is not equal to `1`.

When the user selects option `5`:

```bash
5) finished=1;;
```

`finished` becomes `1`.

The `while` condition then becomes false and the loop terminates.

Finally:

```bash
echo "Thank you for using script"
```

is executed.

---

## 9. Complete Script

```bash
#!/bin/bash

finished=0

while [ $finished -ne 1 ]
do
    echo "What is your favourite linux distribution"
    echo "Select appropriate choice"
    echo "1. Arch"
    echo "2. CentOS"
    echo "3. Debian"
    echo "4. Ubuntu"
    echo "5. Exit Script"

    read choice

    case $choice in
        1) echo "You have chosen Arch";;
        2) echo "You have chosen CentOS";;
        3) echo "You have chosen Debian";;
        4) echo "You have chosen Ubuntu";;
        5) finished=1;;
        *) echo "Not valid choice";;
    esac
done

echo "Thank you for using script"
```

---

## 10. Example Execution

When you run:

```bash
./caseStatementScript.sh
```

you may see:

```text
What is your favourite linux distribution
Select appropriate choice
1. Arch
2. CentOS
3. Debian
4. Ubuntu
5. Exit Script
3
You have chosen Debian
```

The menu appears again because the `while` loop is still running.

If you enter:

```text
5
```

the script exits the loop and displays:

```text
Thank you for using script
```

---

## 11. Pattern Matching

`case` is more powerful than simply comparing numbers.

For example:

```bash
case "$choice" in
    y|Y)
        echo "Yes"
        ;;
    n|N)
        echo "No"
        ;;
    *)
        echo "Invalid choice"
        ;;
esac
```

Here:

```text
y|Y  -> Matches y or Y
n|N  -> Matches n or N
*    -> Matches anything else
```

---

## 12. Matching Strings

`case` can also be used with strings:

```bash
case "$command" in
    start)
        echo "Starting service"
        ;;
    stop)
        echo "Stopping service"
        ;;
    restart)
        echo "Restarting service"
        ;;
    status)
        echo "Checking service status"
        ;;
    *)
        echo "Unknown command"
        ;;
esac
```

This type of pattern is very useful in Embedded Linux scripts.

---

## 13. Embedded Linux Example

A practical Embedded Linux script could provide driver control:

```bash
case "$1" in
    load)
        echo "Loading driver"
        sudo insmod mydriver.ko
        ;;
    unload)
        echo "Unloading driver"
        sudo rmmod mydriver
        ;;
    status)
        lsmod | grep mydriver
        ;;
    *)
        echo "Usage: $0 {load|unload|status}"
        ;;
esac
```

Usage:

```bash
./driver.sh load
```

or:

```bash
./driver.sh unload
```

or:

```bash
./driver.sh status
```

This is a very common use of `case` in Linux scripting.

---

## 14. Important Points to Remember

### Basic structure

```bash
case "$variable" in
    pattern)
        commands
        ;;
esac
```

### Multiple choices

```bash
case "$choice" in
    1)
        echo "Option 1"
        ;;
    2)
        echo "Option 2"
        ;;
esac
```

### Default option

```bash
*)
    echo "Invalid option"
    ;;
```

### Multiple patterns

```bash
y|Y)
    echo "Yes"
    ;;
```

### End of case statement

```bash
esac
```

---

## 15. Practice Exercise

Modify the script to add the following options:

```text
1. Show current date
2. Show current directory
3. Show logged-in user
4. Show Linux kernel version
5. Exit
```

Use a `case` statement to execute the appropriate Linux command.

Useful commands:

```bash
date
pwd
whoami
uname -r
```

This exercise will give you practice with:

- `while`
- `read`
- `case`
- `;;`
- `*`
- Linux commands
- Menu-driven Bash scripts

These concepts are particularly useful when writing shell utilities for **Embedded Linux development**.