#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Main Entry
 * @b: input
 * Return: 0
 */

void *malloc_checked(unsigned int b)
{
	void *ptr_memory;

	ptr_memory = malloc(b);
	if (ptr_memory == NULL)
		exit(98);

	return (ptr_memory);

}
