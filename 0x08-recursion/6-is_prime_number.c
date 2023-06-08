#include "main.h"

/**
* check_prime - recursively divide by higher divisor, skip even nums
* @n: number to check if prime
* @checker: number to compare n with
* Return: 1 if prime, 0 if not, or recursive function call
*/

int check_prime(int n, int checker)
{
	if (n == checker)
		return (1);
	if (n % checker == 0)
		return (0);

	return (check_prime(n, checker + 1));

}


/**
* is_prime_number - check if prime
* @n: number to check
* Return: 1 if prime, 0 if not
*/

int is_prime_number(int n)
{
int checker = 3;

	if (n % 2 == 0 || n < 2)
		return (0);
	if (n == 2)
		return (1);

	return (check_prime(n, checker));
}

