# Structures and Typedef

## Overview
This project covers the usage of structures and typedef in C programming. It includes various programs that demonstrate how to define and use structures, as well as how to create type aliases using typedef.

## Learning Objectives
By the end of this project, you should be able to:
- Understand what structures are and how to define them.
- Use structures to group related data.
- Understand the purpose of typedef and how to use it to create type aliases.
- Use structures and typedef in practical programming scenarios.

## Requirements
- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl`
- You are not allowed to use global variables
- No more than 5 functions per file

## File Descriptions
### [0-create_struct.c](0-create_struct.c)
**Description:** A program that defines a new type `struct dog` with the following elements:
- `name` (type: `char *`)
- `age` (type: `float`)
- `owner` (type: `char *`)

### [1-init_dog.c](1-init_dog.c)
**Description:** A function that initializes a variable of type `struct dog`.
**Prototype:** `void init_dog(struct dog *d, char *name, float age, char *owner);`

### [2-print_dog.c](2-print_dog.c)
**Description:** A function that prints a `struct dog`.
**Prototype:** `void print_dog(struct dog *d);`

### [3-typedef_dog.h](3-typedef_dog.h)
**Description:** A header file that defines a new type `dog_t` as a new name for the type `struct dog`.

### [4-new_dog.c](4-new_dog.c)
**Description:** A function that creates a new dog.
**Prototype:** `dog_t *new_dog(char *name, float age, char *owner);`

### [5-free_dog.c](5-free_dog.c)
**Description:** A function that frees dogs.
**Prototype:** `void free_dog(dog_t *d);`

## Compilation and Execution
To compile any of the C programs, use the following command in your terminal:
```sh
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 filename.c -o output_name
```
To execute the compiled program, use the following command:
```sh
./output_name
```

## Author
Mano Delcourt