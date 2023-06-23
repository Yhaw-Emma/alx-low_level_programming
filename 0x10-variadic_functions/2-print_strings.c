#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_strings - Prints strings, followed by a new line.
* @separator: The string to be printed between strings.
* @n: The number of strings passed to the function.
* @...: A variable number of strings to be printed.
*
* Description: If separator is NULL, it is not printed.
*              If one of the strings if NULL, (nil) is printed instead.
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	const char *str_ptr;
	unsigned int i;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		str_ptr = va_arg(strings, const char *);

		if (str_ptr == NULL)
			printf("(nil)");
		else
			printf("%s", str_ptr);

		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(strings);
	printf("\n");
}
