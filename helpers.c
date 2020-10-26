#include "holberton.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _strcpy - copys a string
 * Return: pointer to copy
 * @dest: destination of copy
 * @src: original string
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * _puts - prints a line to stdout
 * Return: void
 * @str: string passed to function from main
 */

void _puts(char *str)
{
	char *print = str;

	while (*print)
	{
		_putchar(*print);
		print++;
	}
	_putchar('\n');
}


/**
 * _strlen - returns the length of string s
 * Return: length
 * @s: string passed from main
 */

int _strlen(char *s)
{
        int length;
        char *start = s;

        for (length = 0; start[length] != '\0'; length++)
                ;
        return (length);
}


/**
* str_concat - concatenates two strings
* @s1: string from main
* @s2: string from main
* Return: if failure NULL else new string
*/

char *str_concat(char *s1, char *s2)
{
	int firstLength = _strlen(s1);
	int secondLength = _strlen(s2);
	char *middle;
	char *concat;

	if (s1 == 0)
		return (s2);
	if (s2 == 0)
		return (s1);
	concat = malloc(firstLength + secondLength + 1);
	middle = &concat[firstLength];
	if (concat == 0)
		return (0);
	_strcpy(concat, s1);
	_strcpy(middle, s2);
	return (concat);
}

char* itoa(int num, int base)
{
        static char buf[16] = {0};
        int a = 30;

        for(; (num && a) > 0; --a, num /= base)
        {
                //Will output the right symbol at given base
                buf[a] = "0123456789ABCDEF" [num % base];
        }
        return &buf[a + 1];
}
