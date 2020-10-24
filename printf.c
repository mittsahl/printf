#include "holberton.h"

int _printf(const char *format, ...)
{
        va_list args;
	int i = 0;
	char *str;
	char *(*function)(va_list);
	char *buf = malloc(MAX_BUF_SIZE);
	va_start(args, format);
	while (*(format + i))
	{
		if (*format + i) != '%')
		
		if (*(format + i) == '%')
		{	
			function = get_op_func((format + i + 1));
			str = function(args);
			buf = str_concat(buf, str);		
			_puts(buf);
		}
		i++;
	}		
	va_end(args);
	return (0);
}
