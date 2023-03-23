#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the first 98 Fibonacci numbers, starting with 1 and 2,
 * separated by comma and space, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1 = 1;
	int num2 = 2;
	int count = 0;

	printf("%d, %d, ", num1, num2);
	count += 2;

	while (count < 98)
	{
		int fib = num1 + num2;

			printf("%d", fib);

			if (count < 97)
				printf(", ");
			else
				printf("\n");

				num1 = num2;
				num2 = fib;
				count++;
	}

	return (0);
}
