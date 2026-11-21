# UpdateScript.sh

## Description

`UpdateScript.sh` is a simple Bash script that checks the Linux distribution from `/etc/os-release` and runs the appropriate system update command.

The script currently supports:

- **Arch Linux** → `pacman -Syu`
- **Debian / Ubuntu** → `apt update` followed by `apt dist-upgrade`

The script uses `grep` to identify the distribution from `/etc/os-release`. fileciteturn0file0L3-L15

## Script

The script starts with Bash and defines:

```bash
release_file=/etc/os-release
```

It then checks whether the host is based on Arch Linux. If so, it runs:

```bash
sudo pacman -Syu
```

For Debian or Ubuntu, it runs:

```bash
sudo apt update
sudo apt dist-upgrade
```

## Requirements

- Linux operating system
- Bash shell
- `sudo` access
- One of the supported distributions:
  - Arch Linux
  - Debian
  - Ubuntu

## How to Use

### 1. Make the script executable

```bash
chmod +x UpdateScript.sh
```

### 2. Run the script

```bash
./UpdateScript.sh
```

The script may ask for your `sudo` password when the package manager commands are executed.

## Example

On an Ubuntu/Debian system:

```text
$ ./UpdateScript.sh
[sudo] password for user:
...
```

On an Arch Linux system:

```text
$ ./UpdateScript.sh
[sudo] password for user:
...
```

## What You Can Learn From This Script

This is a useful beginner Shell Scripting example because it demonstrates:

1. Bash script execution
2. Variables
3. `if` conditions
4. `grep`
5. Logical OR (`||`)
6. Using `/etc/os-release`
7. Running commands with `sudo`
8. Distribution-specific command execution


