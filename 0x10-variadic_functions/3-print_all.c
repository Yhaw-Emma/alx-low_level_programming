#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_all - prints anything
* @format: list of types of arguments passed to the function
*/

void print_all(const char * const format, ...)
{
	unsigned int x = 0;
	char *sep = "";
	va_list args;

	va_start(args, format);
	while (format && format[x])
	{
		switch (format[x])
		{
			case 'c':
				printf("%s%c", sep, va_arg(args, int));
					break;
			case 'i':
				printf("%s%d", sep, va_arg(args, int));
					break;
			case 'f':
				printf("%s%f", sep, va_arg(args, double));
					break;
			case 's':{
				char *str = va_arg(args, char *);

				if (!str)
				str = "(nil)";
				printf("%s%s", sep, str);
					break; }
			default:
				x++;
				continue;
		}
		sep = ", ";
		x++;
	}
	printf("\n");
	va_end(args);
}

