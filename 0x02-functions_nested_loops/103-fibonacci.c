#include <stdio.h>

/**
 * main - Prints the sum of even Fibonacci numbers up to 4,000,000
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int prev = 1;
	int curr = 2;
	int temp;
	int sum = 0;

	while (curr <= 4000000)
	{
		if (curr % 2 == 0)
		{
			sum += curr;
		}
		temp = curr;
		curr += prev;
		prev = temp;
	}

	printf("%d\n", sum);

	return (0);
}

