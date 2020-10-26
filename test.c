#include "holberton.h"
int main(void)
{
	char *string = "works";
	//_printf("This %s fine.", string);
	_printf("%s fine", string);
	//_printf("This %s", string);
	_printf("%s", string);
	
	return (0);
}	
