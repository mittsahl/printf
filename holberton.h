#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stdlib.h>

/**
 * funcStruct - struct with pointer to a char 
 * @s: pointer to character
 * @matchedFunction: function that corresponds to character
 */

typdef struct funcStruct
{
	char *s;
	char *(*func)(va_list);
} funcStruct;

int _putchar(char c);
char *_strcpy(char *dest, char *src);
void _puts(char *str);
char *_strcpy(char *dest, char *src);
char *str_concat(char *s1, char *s2);
char *_strcat(char *dest, char *src);

#endif
