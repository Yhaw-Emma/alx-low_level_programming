#include "main.h"

/**
 * factorial - Calculate the factorial of a number.
 * @n: The input number.
 *
 * Return: The factorial of the input number.
 */




int factorial(int n)
{
	if (n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
