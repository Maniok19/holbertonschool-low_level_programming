# Function Pointers

## Overview
This project covers the usage of function pointers in C programming. It includes various exercises and programs that demonstrate how to define, use, and manipulate function pointers.

## Table of Contents
- [Introduction](#introduction)
- [Learning Objectives](#learning-objectives)
- [Requirements](#requirements)
- [Installation](#installation)
- [Usage](#usage)
- [Files](#files)
- [Author](#author)

## Introduction
Function pointers are a powerful feature in C that allow you to store the address of a function in a pointer variable. This enables you to call functions dynamically, pass functions as arguments to other functions, and create more flexible and reusable code.

## Learning Objectives
By the end of this project, you should be able to:
- Understand what function pointers are and how to declare them.
- Use function pointers to call functions.
- Pass function pointers as arguments to other functions.
- Use function pointers in arrays to create jump tables.
- Understand the benefits and use cases of function pointers.

## Requirements
- Ubuntu 20.04 LTS
- GCC compiler

## Installation
Clone the repository to your local machine:
```sh
git clone https://github.com/your_username/holbertonschool-low_level_programming.git
```
Navigate to the project directory:
```sh
cd holbertonschool-low_level_programming/function_pointers
```

## Usage
Compile the C files using `gcc`:
```sh
gcc -Wall -Werror -Wextra -pedantic <filename.c> -o <output_name>
```
Run the compiled programs:
```sh
./<output_name>
```

## Files
- `0-print_name.c` - A function that prints a name using a function pointer.
- `1-array_iterator.c` - A function that executes a function given as a parameter on each element of an array.
- `2-int_index.c` - A function that searches for an integer in an array using a function pointer.
- `3-calc.h` - Header file containing all the function prototypes and data structures for a simple calculator.
- `3-op_functions.c` - Functions that perform basic arithmetic operations.
- `3-get_op_func.c` - A function that selects the correct function to perform the operation asked by the user.
- `3-main.c` - The main function that performs simple operations using function pointers.

## Author
Mano Delcourt
- [GitHub](https://github.com/Maniok19)