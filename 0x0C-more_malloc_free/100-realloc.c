#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previsouly allocated by malloc
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory block
 *
 * Return: pointer to the newly allocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;/*Pointer to the newly allocated memory block*/
	char *old_ptr;/*Pointer to the old memory block*/
	unsigned int i;/*Loop counter variable*/

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			new_ptr[i] = old_ptr[i];
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			new_ptr[i] = old_ptr[i];
	}
	free(ptr);
	return (new_ptr);
}
