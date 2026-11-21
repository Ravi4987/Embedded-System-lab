# PassingArgumentToScript.sh

A simple Bash script that demonstrates how to pass and validate command-line
arguments in a shell script.

## Description

The script checks whether exactly **two** arguments were supplied when it was
run. If not, it prints an error message; otherwise, it prints the two
arguments back to the user.

## Requirements

- Bash shell (Linux/macOS/WSL)
- Execute permission on the script

## Usage

Make the script executable (one-time step):

```bash
chmod +x PassingArgumentToScript.sh
```

Run the script with exactly two arguments:

```bash
./PassingArgumentToScript.sh arg1 arg2
```

### Example

```bash
$ ./PassingArgumentToScript.sh hello world
Arguments are hello, world
```

If you run it with the wrong number of arguments (zero, one, three, etc.):

```bash
$ ./PassingArgumentToScript.sh hello
No Argument pass to script
```

## How It Works

| Element | Meaning |
|---|---|
| `$1`, `$2` | The first and second positional arguments passed to the script |
| `$#` | The total number of arguments passed to the script |
| `[ $# -ne 2 ]` | Checks if the argument count is **not equal to** 2 |

The script logic:

1. Counts the number of arguments passed (`$#`).
2. If the count is **not** exactly 2, it prints `"No Argument pass to script"`.
3. Otherwise, it prints both arguments using `"Arguments are $1, $2"`.

## Notes / Possible Improvements

- The error message could be made more accurate — it currently says *"No
  Argument pass to script"* even when arguments were passed, just not
  exactly two. A clearer message would be:
  `"Error: Exactly 2 arguments are required."`
- Argument values are not quoted-safe against edge cases like empty strings;
  wrapping variables in quotes (already done here with `"$1, $2"`) is good
  practice and is followed correctly in this script.
- A commented-out debug line exists at the top of the script
  (`#echo "The argument to this script is $1,$2"`) and can be removed or
  uncommented for troubleshooting.

## License

Free to use and modify.
