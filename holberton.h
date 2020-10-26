#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

#define MAX_BUF_SIZE 1024

/**
 * funcStruct - struct with pointer to a char 
 * @s: pointer to character
 * @matchedFunction: function that corresponds to character
 */

typedef struct funcStruct
{
	char *letter;
	char *(*func)(va_list);
} funcStruct;

int _putchar(char c);
char *_strcpy(char *dest, char *src);
void _puts(char *str);
char *_strcpy(char *dest, char *src);
char *str_concat(char *s1, char *s2);
char *_strcat(char *dest, char *src);
int _strlen(char *s);
char *(*get_op_func(const char s))(va_list);
void rev_string(char *s);
char *op_string(va_list args);
char *op_reverse(va_list args);
int _printf(const char *format, ...);
#endif
