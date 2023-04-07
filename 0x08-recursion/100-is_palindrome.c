#include "main.h"

/**
 * _strlen - Computes the length of a string.
 *
 * @s: The string to compute the length of.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

/**
 * check_palindrome - Recursively checks if a string is a palindrome.
 *
 * @s: The string to check.
 * @start: The index of the first character to check.
 * @end: The index of the last character to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}

	if (s[start] != s[end])
	{
		return (0);
	}

	return (check_palindrome(s, start + 1, end - 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 *
 * @s: Pointer to the string to check.
 *
 * Return: 1 if @s is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int len = _strlen(s);

	return (check_palindrome(s, 0, len - 1));
}
