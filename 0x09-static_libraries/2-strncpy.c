#include "main.h"

/**
 * _strncpy - Copy a string to a destination string.
 *
 * @dest: Pointer to destination string.
 * @src: Pointer to source string.
 * @n: Number of bytes to be used.
 *
 * Return: Pointer to destination string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	for (; j < n; j++)
	{
		dest[j] = '\0';
	}

	return (dest);
}

