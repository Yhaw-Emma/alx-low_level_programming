#include "main.h"
/**
 * _print_rev_recursion - Prints a string in reverse using recursion
 * @s: The string to be printed in reverse
 *
 * Description: This function recursively prints a string in reverse
 * order by using a recursive approach.
 */


void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return; /* base case: end of string */

	_print_rev_recursion(s + 1); /* recursive call */

	_putchar(*s); /* print the current character */
}
