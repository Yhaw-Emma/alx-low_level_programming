#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * is_digit - checks if a string contains a non-digit char
 * @str: string to be evaluated
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_digit(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @str: string to evaluate
 * Return: the length of the string
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * errors - handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *str1, *str2;
	int length_1, length_2, length, i, carry, digit1, digit2, *result, a = 0;

	str1 = argv[1], str2 = argv[2];
	if (argc != 3 || !is_digit(str1) || !is_digit(str2))
		errors();
	length_1 = _strlen(str1);
	length_2 = _strlen(str2);
	length = length_1 + length_2 + 1;
	result = malloc(sizeof(int) * length);
	if (!result)
		return (1);
	for (i = 0; i <= length_1 + length_2; i++)
		result[i] = 0;
	for (length_1 = length_1 - 1; length_1 >= 0; length_1--)
	{
		digit1 = str1[length_1] - '0';
		carry = 0;
		for (length_2 = _strlen(str2) - 1; length_2 >= 0; length_2--)
		{
			digit2 = str2[length_2] - '0';
			carry += result[length_1 + length_2 + 1] + (digit1 * digit2);
			result[length_1 + length_2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[length_1 + length_2 + 1] += carry;
	}
	for (i = 0; i < length - 1; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
