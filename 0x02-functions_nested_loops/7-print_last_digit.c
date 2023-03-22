#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 *
 * @i: The number to get the last digit from.
 *
 * Return: The value of the last digit.
 */

int print_last_digit(int i)

{
	int k = i % 10;

	if (i < 0)
		k = -k;
	_putchar(k + '0');
	return (k);
}
