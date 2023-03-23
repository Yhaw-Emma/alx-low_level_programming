#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the first 50 Fibonacci numbers.
 * Starting with 1 and 2, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, first = 1, second = 2, next;

	printf("%d, %d, ", first, second);

	for (n = 3; n <= 50; n++)
	{
		next = first + second;
		printf("%d", next);

		if (n < 50)
		{
			printf(", ");
		}

		first = second;
		second = next;
	}

	printf("\n");

	return (0);
}

