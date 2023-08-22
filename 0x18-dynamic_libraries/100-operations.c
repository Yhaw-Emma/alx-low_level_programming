#include <stdio.h>

/**
 * add - Adds two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The sum of @a and @b.
 */
int add(int a, int b)
{
    return a + b;
}

/**
 * sub - Subtracts two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The result of subtracting @b from @a.
 */
int sub(int a, int b)
{
    return a - b;
}

/**
 * mul - Multiplies two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The product of @a and @b.
 */
int mul(int a, int b)
{
    return a * b;
}

/**
 * div - Divides two integers.
 * @a: The dividend.
 * @b: The divisor.
 *
 * Return: The result of dividing @a by @b.
 *         If @b is 0, returns 0 (division by zero).
 */
int div(int a, int b)
{
    if (b != 0)
    {
        return a / b;
    }
    else
    {
        /*Handle division by zero*/
        return 0; /*You can choose how to handle this case*/
    }
}

/**
 * mod - Computes the modulo of two integers.
 * @a: The dividend.
 * @b: The divisor.
 *
 * Return: The result of @a modulo @b.
 *         If @b is 0, returns 0 (modulo by zero).
 */
int mod(int a, int b)
{
    if (b != 0)
    {
        return a % b;
    }
    else
    {
        // Handle modulo by zero
        return 0; // You can choose how to handle this case
    }
}

