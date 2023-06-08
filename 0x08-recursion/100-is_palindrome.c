#include "main.h"

/**
* _strlen - return length of string
* @string: string to check
*
* Return: length of str
*/
int _strlen(char *string)
{
	if (*string  == '\0')
		return (0);
	else
		return (1 + _strlen(string + 1));
}

/**
* check_palindrome - checks to see if a string is a palindrome
* @start: start of the string
* @end: end of the string
*
* Return: 1 if palindrome 0 if not
*/

int check_palindrome(char *start, char *end)
{
	if (start >= end)
		return (1); /*Base case: All characters have been checked*/

	if (*start != *end)
		return (0); /*Characters do not match, not a palindrome*/

	return (check_palindrome(start + 1, end - 1));
}


/**
* is_palindrome - states if a string is a palindrome
* @s: string to check
*
* Return: 1 if palindrome, 0 if not
*/
int is_palindrome(char *s)
{
	int length;

	length = _strlen(s) - 1;
		return (check_palindrome(s, s + length));
}


