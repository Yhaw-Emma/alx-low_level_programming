#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings up to a specified length.
 * @s1: First input string.
 * @s2: Second input string.
 * @n: Maximum number of characters to concatenate from s2.
 * Return: Pointer to the concatenated string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr_str;
	unsigned int i, j, s1_length, s2_length;

	/* checking the string length os s1 and s2*/
	for (s1_length = 0; s1[s1_length] != '\0';)
		s1_length++;
	for (s2_length = 0; s2[s2_length] != '\0';)
		s2_length++;

	/* allocating memory to ptr_str using malloc*/

	if (n < s2_length)
		ptr_str = malloc(sizeof(char) * (s1_length + n + 1));
	else
		ptr_str = malloc(sizeof(char) * (s1_length + s2_length + 1));
	if (ptr_str == NULL)
		return (NULL);

	/*assigning s1 to ptr_str*/
	for (i = 0; i < s1_length; i++)
		ptr_str[i] = s1[i];
	/*concatinating s2 to ptr_str*/
	if (n < s2_length)
	{
		for (j = 0; j < n; j++)
			ptr_str[i++] = s2[j];
	}
	else
	{
		for (j = 0; j < s2_length; j++)
			ptr_str[i++] = s2[j];
	}

	ptr_str[i] = '\0';
	return (ptr_str);

}
