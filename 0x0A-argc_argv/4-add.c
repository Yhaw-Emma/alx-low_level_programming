#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array of pointers to the arguments
 *
 * Return: 0 if successful, otherwise 1
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int j;
	int i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (j = 1; j < argc; j++)
	{
	i = atoi(argv[j]);
	if (i == 0 && *argv[j] != '0')
	{
	printf("Error\n");
		return (1);
	}
		sum = sum + i;
	}

	printf("%d\n", sum);
	return (0);
}

