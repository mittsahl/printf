#include "holberton.h"
/**
 * _printf - should print like stdio printf
 * @format: asdf
 * Return: string
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i, j, length = 0;
	char *str, *(*function)(va_list), *buf = malloc(MAX_BUF_SIZE);

	if (format == NULL)
		return (-1);
	va_start(args, format);
	for (i = 0, j = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
			buf[j] = format[i];
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
			{
				length = _strlen(buf);
				write(1, buf, length);
				return (-1);
			}
			while (format[i + 1] == ' ')
				i++;
			function = get_op_func(*(format + i + 1));
			if (!function)
				return (-1);
			str = function(args);
			_strcat(buf, str);
			i++;
			while (buf[j])
				j++;
			continue;
		}
		j++;
	}
	length = _strlen(buf);
	write(1, buf, length);
	handleBufandArgs(buf, args);
	return (length);
}

