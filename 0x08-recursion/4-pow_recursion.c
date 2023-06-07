#include "main.h"

/**
 * _pow_recursion - Calculates the power of an integer recursively.
 * @x: The base number.
 * @y: The exponent.
 *
 * Return: The value of @x raised to the power of @y,
 *         -1 if @y is negative (unsupported).
 */


int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));

}
