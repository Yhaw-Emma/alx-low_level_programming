#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - Search a string for any of a set of bytes.
 *
 * @s: Pointer to string to be searched.
 * @accept: Pointer to bytes to be searched for.
 *
 * Return: Pointer in `s` that matches of the bytes in `accept`,
 * or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}

	return (NULL);
}
