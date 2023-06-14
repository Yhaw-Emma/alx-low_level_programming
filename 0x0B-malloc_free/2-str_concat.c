#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Main Entry
 * @s1: input
 * @s2: input
 * Return: 0
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr_strcnt;
	int x, y;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* getting length of s1 and s2*/
	x = y = 0;
	while (s1[x] != '\0')
		x++;

	while (s2[y] != '\0')
		y++;

	/*  allocating memory to *ptr_strcnt */
	ptr_strcnt = malloc(sizeof(char) * (x + y + 1));
	if (ptr_strcnt == NULL)
		return (NULL);

	/* copying S1 and s2 to allocated memory */
	x = y = 0;

	while (s1[x] != '\0')
	{
		ptr_strcnt[x] = s1[x];
		x++;
	}
	while (s2[y] != '\0')
	{
		ptr_strcnt[x] = s2[y];
		x++;
		y++;
	}
	ptr_strcnt[x] = '\0';

	return (ptr_strcnt);

}
