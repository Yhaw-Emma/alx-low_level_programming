#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Main Entry
 * @nmemb: input
 * @size: input
 * Return: 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr_memory;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr_memory = malloc(nmemb * size);

	if (ptr_memory == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		ptr_memory[i] = 0;

	return (ptr_memory);

}
