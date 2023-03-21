#include "main.h"
/**
 *print_alphabet - function that prints alphabet a-z
 *Return: always )
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	_putchar('\n');
}
