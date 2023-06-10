#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int x;
	for (x = 0; x < argc; x++)
		printf("%s\n", argv[x]);
	return(0);


}
