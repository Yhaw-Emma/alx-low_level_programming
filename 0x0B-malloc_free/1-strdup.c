#include "main.h"
#include <stdlib.h>


/**
 * _strdup - Main Entry
 * @str: input string
 * Return: 0
 */


char *_strdup(char *str)
{
	char *ptr_str;
	int i;
	/* get length of string*/
	int str_len;

	for (str_len = 0; str[str_len] != '\0';)
		str_len++;

	/* Allocate memory to *ptr_str */
	ptr_str = malloc(str_len * sizeof(char) + 1);

	if (ptr_str == NULL || str == NULL)
		return (NULL);

	/*copy text to allocated memory*/
	for (i = 0; str[i] != '\0'; i++)
		ptr_str[i] = str[i];

	ptr_str[str_len] = '\0';



	return (ptr_str);
}
