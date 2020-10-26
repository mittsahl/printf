#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>

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
char *op_int(va_list args);
char *op_unsignedInt(va_list args);
char *op_octal(va_list args);
char *op_unsignedHex(va_list args);
int _printf(const char *format, ...);
char* itoa(int num, int base);
char *op_pointer(va_list args);
char* utoa(unsigned int num, unsigned int base);
char* ultoa(unsigned long int num, unsigned long int base);
char *utoaCap(unsigned int num, unsigned int base);
char *op_unsignedHexCap(va_list args);
char *op_percent(va_list args);
char *op_char(va_list args);
char *rot13(char *a);
char *op_rot13(va_list args);
#endif
