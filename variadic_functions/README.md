# Variadic Functions

## Overview
This project contains a series of C programs that demonstrate the usage of variadic functions. Variadic functions are functions that can take a variable number of arguments.

## Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:
- What are variadic functions
- How to use `va_start`, `va_arg`, and `va_end` macros
- Why and how to use the `const` type qualifier

## Requirements
- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl`
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are `malloc`, `free`, and `exit`. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc… is forbidden
- You are allowed to use `_putchar`
- You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account
- All your header files should be include guarded

## File Descriptions
### [0-sum_them_all.c](0-sum_them_all.c)
**Description:** A function that returns the sum of all its parameters.
**Prototype:** `int sum_them_all(const unsigned int n, ...);`

### [1-print_numbers.c](1-print_numbers.c)
**Description:** A function that prints numbers, followed by a new line.
**Prototype:** `void print_numbers(const char *separator, const unsigned int n, ...);`

### [2-print_strings.c](2-print_strings.c)
**Description:** A function that prints strings, followed by a new line.
**Prototype:** `void print_strings(const char *separator, const unsigned int n, ...);`

### [3-print_all.c](3-print_all.c)
**Description:** A function that prints anything.
**Prototype:** `void print_all(const char * const format, ...);`

## Compilation and Execution
To compile any of the C programs, use the following command in your terminal:
```sh
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 filename.c -o output_name
```
To execute the compiled program, use the following command:
```sh
./output_name [arguments]
```

## Author
Mano Delcourt