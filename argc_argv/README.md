# Project on argc and argv

## Overview
This project contains a series of C programs that demonstrate the usage of command-line arguments (`argc` and `argv`). Each file in this directory is a standalone program with a specific functionality related to handling command-line inputs.

## File Descriptions

### [0-whatsmyname.c](0-whatsmyname.c)
**Description:** Prints the name of the program.
**Usage:** Run the program to see the name of the executable printed.

### [1-args.c](1-args.c)
**Description:** Prints the number of arguments passed to the program.
**Usage:** Run the program with various arguments to see the count of arguments printed.

### [2-args.c](2-args.c)
**Description:** Prints all the arguments passed to the program.
**Usage:** Run the program with various arguments to see each argument printed on a new line.

### [3-mul.c](3-mul.c)
**Description:** Multiplies two numbers passed as arguments and prints the result.
**Usage:** Run the program with two numeric arguments to see their product printed.

### [4-add.c](4-add.c)
**Description:** Adds positive numbers passed as arguments and prints the result.
**Usage:** Run the program with multiple numeric arguments to see their sum printed.

### [100-change.c](100-change.c)
**Description:** Prints the minimum number of coins to make change for an amount of money.
**Usage:** Run the program with an amount to see the minimum number of coins needed.

## Compilation and Execution
To compile any of the C programs, use the following command in your terminal:
```sh
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 filename.c -o output_name
```
To execute the compiled program, use the following command:
```sh
./output_name [arguments]
```
## Example Usage
```sh
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-whatsmyname.c -o whatsmyname
./whatsmyname
```

##Author
Mano Delcourt