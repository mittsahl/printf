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

        if (num > 0)
	{
		for(; (num && a) > 0; --a, num /= base)
        	{
                	//Will output the right symbol at given base
                	buf[a] = "0123456789ABCDEF" [num % base];
        	}
	}
        if (num < 0)
	{
		for(; (num < 0 && a > 0); --a, num /= base)
        	{
                	//Will output the right symbol at given base
                	buf[a] = "0123456789ABCDEF" [(num % base) * -1];
        	}
		buf[a] = '-';
		a--;
	}
	return &buf[a + 1];
}
char* utoa(unsigned int num, unsigned int base)
{
        static char buf[16] = {0};
        int a = 30;

        if (num > 0)
	{
		for(; (num && a) > 0; --a, num /= base)
        	{
                	//Will output the right symbol at given base
                	buf[a] = "0123456789abcdef" [num % base];
        	}
	}
	return &buf[a + 1];
}


char* ultoa(unsigned long int num, unsigned long int base)
{
        static char buf[16] = {0};
        int a = 30;

        if (num > 0)
	{
		for(; (num && a) > 0; --a, num /= base)
        	{
                	//Will output the right symbol at given base
                	buf[a] = "0123456789abcdef" [num % base];
        	}
	}
	return &buf[a + 1];
}	
char *utoaCap(unsigned int num, unsigned int base)
{
        static char buf[16] = {0};
        int a = 30;

        if (num > 0)
	{
		for(; (num && a) > 0; --a, num /= base)
        	{
                	//Will output the right symbol at given base
                	buf[a] = "0123456789ABCDEF" [num % base];
        	}
	}
	return &buf[a + 1];
}

/**
*rot13 - encode in rot3
*Return: rot13'd string
*@a: string
*/
char *rot13(char *a)
{
	int i = 0, j;
	char *string1 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *string2= "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(a + i) != 0)
	{
		for (j = 0; j < 52; j++)
		{
			if (a[i] == string1[j])
			{
				a[i] = string2[j];
				break;
			}
		}
		i++;
	}
	return (a);
}
