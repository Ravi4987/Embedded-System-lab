# What is a Shell in Linux?

A shell is a **program that acts as an interface between the user and the operating system's kernel**. It takes commands you type, interprets them, and tells the kernel what to do.

## How it works

```
User types command → Shell interprets it → Kernel executes it → Output returned to user
```

Think of it as a translator: you speak in commands (like `ls`, `cd`, `mkdir`), and the shell translates those into instructions the kernel understands.

## Two ways to use a shell

1. **Interactive mode** – You type commands one at a time in a terminal, and the shell executes them immediately.
2. **Script mode** – You write a series of commands in a file (a shell script) and run them all at once.

## Common types of shells in Linux

| Shell | Name | Notes |
|---|---|---|
| `sh` | Bourne Shell | The original, very basic |
| `bash` | Bourne Again Shell | Most common default shell on Linux |
| `zsh` | Z Shell | Highly customizable, popular (default on macOS) |
| `fish` | Friendly Interactive Shell | User-friendly, great autocompletion |
| `csh`/`tcsh` | C Shell | Syntax similar to C programming |
| `ksh` | Korn Shell | Combines features of sh and csh |

## What a shell lets you do

- Run programs and commands
- Manage files and directories (`cp`, `mv`, `rm`, `mkdir`)
- Chain commands together using pipes (`|`) and redirection (`>`, `>>`, `<`)
- Write scripts to automate tasks
- Set environment variables
- Manage processes (start, stop, background/foreground jobs)

## Example

```bash
$ ls -l /home
```

Here, `bash` (the shell) is running. When you type `ls -l /home`, the shell:
1. Parses the command and its argument (`-l /home`)
2. Locates the `ls` program
3. Passes control to the kernel to execute it
4. Displays the output back to you

## Checking your current shell

```bash
echo $SHELL
```

or

```bash
echo $0
```
