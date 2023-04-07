#include "main.h"

/**
 * _puts_recursion - prints a string:
 * @s: the string to print
 * Return: 0
 * This function uses recursion to print a given string.
 *It first checks if the current character being pointed to by s('\0').
 *If it is, it prints a newline character and returns from the function.
 *Otherwise, it prints the current character and increments
 *the pointer to the next character in the string.
 *Then,it calls itself updated pointer to print the rest of the string.
 *This process continues until the null terminator is reached.
 */
void _puts_recursion(char *s)

{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
