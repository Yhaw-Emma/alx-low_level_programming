#include "main.h"
#include <stdlib.h>

/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int i, j, count = 0, str_len = 0;
	char *ptr_str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			str_len++;
	}
	str_len += ac;

	ptr_str = malloc(sizeof(char) * str_len + 1);

	if (ptr_str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{

		for (j = 0; av[i][j]; j++)
		{
			ptr_str[count] = av[i][j];
			count++;
		}

		if (ptr_str[count] == '\0')
		{

			ptr_str[count++] = '\n';
		}
	}
	return (ptr_str);
}
