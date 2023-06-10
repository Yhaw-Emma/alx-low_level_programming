#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 if no errors, otherwise 1
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int x;
	char *ptr;

	for (x = 1; x < argc; x++)
	{
		ptr = argv[x];

		while (*ptr != '\0')
		{
			if (!isdigit(*ptr))
			{
				printf("Error\n");
				return (1);
			}
			ptr++;
		}

		sum += atoi(argv[x]);
	}

	printf("%d\n", sum);
	return (0);
}

