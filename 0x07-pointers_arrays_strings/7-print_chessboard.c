#include "main.h"

/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (success)
 */
void print_chessboard(char (*a)[8])
{
	int i, n;
	
	for (i = 0; 1 < 8; i++)
	{
		for (n = 0; n < 8; n++)
			_putchar(a[i][n]);
		-putchar('\n');
	}
}
