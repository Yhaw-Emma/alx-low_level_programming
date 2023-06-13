#include "main.h"
#include <stdlib.h>
/**
 * create_array - Main Entry
 * @size: input
 * @c: input
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
		char *ptr_array;
		unsigned int count;


		/* assign memory to array pointer */
		ptr_array = malloc(sizeof(char) * size);

		/* check if memory is allocated and size of array not 0 */
		if (ptr_array == NULL || size == 0)
		{

			return (NULL);
		}

		/*fill allocated memory with char c*/
		for (count = 0; count < size; count++)
		{
			ptr_array[count] = c;
		}

		return (ptr_array);
}
