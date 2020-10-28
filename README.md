#Recreating Printf

## Printf

<br>

A function producing an output based on the given format specifiers
- d or i - Integer
- u - unsigned integer
- o - octal
- x - unsigned hex
- c - character
- s - string
- p - pointer address
- % - percent sign

## Files

<br>

**holberton.h** - Contains prototypes and structs needed for this project
** helpers.c** - Functions to assist our tasks, not printf functions
** helpers2.c** - More functions to assists our tasks
** helpers3.c** - Even more functions to assists our tasks
** function.c** - Printf functions for specific modifiers
** function2.c** - More printf functions for specific modifiers
** function3.c** - Even more printf functions for specific modifiers
** get_op_func.c** - Contains a struct pointing to printf functions in function.c file
** tests.c** - File containing tests for out functions
** main.c** - Given test file
** printf.c** - Main file/entry point for printf function
** man_3_printf** - The man page for _printf

##Functions

<br>

##Return value

<br>

The length of characters printed.

##Usage

<br>

Here is an example of how to use _printf() with the %d format specifier.
```c
printf("%d", 12);
```
This would print out `12`.

##Prototype

<br>

```c
int _printf(const char *format, ...)
```

