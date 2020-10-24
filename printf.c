#include "holberton.h"

int _printf(const char *format, ...)
{
	unsigned int willy = 0;
        char *string;
        va_list list;

        va_start(list, format);
        //while (*(format + willy) != '\0' && (format))
        //{
                        funcStruct array[] = {
				{"s", op_string},
				{"i", op_int},
				{"d", op_int},
				{"u", op_unsignedInt},
				{"o", op_octal},
				{"x", op_unsignedHex},
				{"c", op_char},
				{"p", op_pointer},
				{"%", op_percent},
				{NULL, NULL}};
        //}
        printf("\n");
        va_end(list);

	//Place this in the op_function file
	char* itoa(int val, int base){

	    static char buf[32] = {0};

	    int i = 30;
    
	    for(; val && i ; --i, val /= base){
		printf("val %d i %d base %d\n", val, i, base);
		buf[i] = "0123456789ABCDEF"[val % base];
	    }

	    return &buf[i+1];

	}
}
