# Recreating Printf

## Printf

<br>

A function producing an output based on the given format specifiers
- **d** or **i** - Integer
- **u** - unsigned integer
- **o** - octal
- **x** - unsigned hex
- **c** - character
- **s** - string
- **p** - pointer address
- **%** - percent sign

## Files

<br>

- **holberton.h** - Contains prototypes and structs needed for this project
- **helpers.c** - Functions to assist our tasks, not printf functions
- **helpers2.c** - More functions to assists our tasks
- **helpers3.c** - Even more functions to assists our tasks
- **function.c** - Printf functions for specific modifiers
- **function2.c** - More printf functions for specific modifiers
- **function3.c** - Even more printf functions for specific modifiers
- **get_op_func.c** - Contains a struct pointing to printf functions in function.c file
- **tests.c** - File containing tests for out functions
- **main.c** - Given test file
- **printf.c** - Main file/entry point for printf function
- **man_3_printf** - The man page for _printf

## Functions

<br>

Here are all the functions we used in this project:

### helpers.c
- _putchar
- _strcpy
- _puts
- _strlen
- str_concat

### helpers2.c
- _strcat
- rev_string
- handleBufandArgs

### helpers3.c
- itoa
- utoa
- ultoa
- utoaCap
- rot13

### functions.c
- op_char
- op_string
- op_reverse
- op_int
- op_octal

### functions2.c
- op_unsigned
- op_unsignedHexCap
- op_unsignedHex
- op_pointer
- op_percent

### functions3.c
- op_rot13
- op_binary

### get_op_func.c
- get_op_func

### holberton.h
Holds all necessary prototypes

### man_3_printf
A man page for _printf


## Return value

<br>

The length of characters printed.

## Usage

<br>

Here is an example of how to use _printf() with the %d format specifier.
```c
printf("%d", 12);
```
This would print out `12`.

## Prototype

<br>

```c
int _printf(const char *format, ...)
```

