# Bash Functions

## 1. Introduction

A **function** in Bash is a reusable block of commands that performs a specific task.

Functions are useful because they:

- Make scripts easier to read
- Avoid repeating code
- Make debugging easier
- Allow code to be reused
- Help divide a large script into smaller tasks

---

## 2. Basic Function Syntax

The common syntax for a Bash function is:

```bash
function_name()
{
    commands
}
```

Example:

```bash
show_message()
{
    echo "Checking file"
}
```

The function does not execute when it is defined.

It executes only when we call it:

```bash
show_message
```

---

## 3. Function with an Argument

A function can receive arguments.

Example:

```bash
check_file()
{
    local file=$1

    echo "Checking: $file"
}
```

Call the function:

```bash
check_file "/etc/passwd"
```

Here:

```text
$1 = /etc/passwd
```

`$1` represents the **first argument passed to the function**.

Similarly:

```text
$1  -> First argument
$2  -> Second argument
$3  -> Third argument
...
```

---

## 4. Using `local`

It is good practice to use `local` for variables that are only required inside a function.

Example:

```bash
check_file()
{
    local file=$1

    echo "$file"
}
```

Here `file` is a local variable.

Its value is available inside the `check_file()` function.

---

## 5. Checking Whether a File Exists

The following function checks whether a regular file exists:

```bash
check_file()
{
    local file=$1

    if [ -f "$file" ]; then
        echo "$file exists"
    else
        echo "$file does not exist"
    fi
}
```

The `-f` test checks whether the specified path is a **regular file**.

Example:

```bash
check_file "/etc/passwd"
```

---

## 6. Checking Any Existing Path

If you want to check whether a path exists, including a directory, use `-e`:

```bash
if [ -e "$file" ]; then
    echo "$file exists"
else
    echo "$file does not exist"
fi
```

Difference:

```text
-f    Regular file
-d    Directory
-e    File or directory/path exists
```

For example:

```bash
[ -f "/etc/passwd" ]
```

checks for a regular file.

While:

```bash
[ -d "/etc" ]
```

checks for a directory.

---

## 7. Complete Example

```bash
#!/bin/bash

# Function to check whether file exists or not
check_file()
{
    # $1 is the first argument passed to function
    local file=$1

    if [ -f "$file" ]; then
        echo "$file exists"
    else
        echo "$file does not exist"
    fi
}

# Function to display a message
show_message()
{
    echo "Checking file"
}

# Main part of script
show_message

check_file "/etc/passwd"
check_file "/etc/abc"
```

---

## 8. How the Script Executes

When the script starts, Bash first reads the function definitions:

```bash
check_file()
{
    ...
}

show_message()
{
    ...
}
```

The functions are **defined but not executed** at this point.

Then Bash reaches:

```bash
show_message
```

The function executes:

```text
Checking file
```

Next:

```bash
check_file "/etc/passwd"
```

The argument `/etc/passwd` is passed to the function:

```text
$1 = /etc/passwd
```

The function checks whether it is a regular file.

Then:

```bash
check_file "/etc/abc"
```

checks the second path.

---

## 9. Multiple Function Arguments

A function can accept multiple arguments.

Example:

```bash
print_details()
{
    local name=$1
    local age=$2
    local city=$3

    echo "Name : $name"
    echo "Age  : $age"
    echo "City : $city"
}
```

Call:

```bash
print_details "Ravi" 33 "Lucknow"
```

The arguments are:

```text
$1 = Ravi
$2 = 33
$3 = Lucknow
```

---

## 10. Function Return Value

A Bash function can return a numeric status code.

Example:

```bash
check_file()
{
    local file=$1

    if [ -f "$file" ]; then
        return 0
    else
        return 1
    fi
}
```

Then:

```bash
if check_file "/etc/passwd"; then
    echo "File exists"
else
    echo "File does not exist"
fi
```

By convention:

```text
0       Success
Non-zero Failure/Error
```

This is especially important when writing **Embedded Linux shell scripts**, because functions can be used to report whether an operation succeeded or failed.

---

## 11. Important Points to Remember

1. Function definition:

```bash
function_name()
{
    commands
}
```

2. Function call:

```bash
function_name
```

3. First function argument:

```bash
$1
```

4. Second function argument:

```bash
$2
```

5. Local variable:

```bash
local variable=value
```

6. Return success:

```bash
return 0
```

7. Return failure:

```bash
return 1
```

8. `-f` checks for a regular file.

9. `-d` checks for a directory.

10. `-e` checks whether a path exists.

---

## 12. Running the Script

Give execute permission:

```bash
chmod +x FunctionScript.sh
```

Run it:

```bash
./FunctionScript.sh
```

Alternatively:

```bash
bash FunctionScript.sh
```

---

## 13. Why Functions Are Important in Embedded Linux

As your shell scripts become larger, putting everything directly in the main section makes the script difficult to maintain.

For example, an Embedded Linux script might contain functions such as:

```bash
check_device()
load_driver()
unload_driver()
check_process()
start_service()
stop_service()
create_log()
```

The main part of the script can then simply call these functions:

```bash
check_device
load_driver
check_process
start_service
```

This makes the script easier to understand, maintain, and debug.

---

## 14. Practice Exercise

Create a function called:

```bash
check_directory()
```

The function should:

1. Accept a directory path as `$1`.
2. Check whether the directory exists.
3. Print:

```text
Directory exists
```

if it exists.

Otherwise print:

```text
Directory does not exist
```

Then call the function with:

```bash
check_directory "/etc"
check_directory "/home/test"
```

This will give you practice with **functions + arguments + `local` variables + `if` conditions**.