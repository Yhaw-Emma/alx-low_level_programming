#include"lists.h"
#include <stdlib.h>
#include <string.h>

/*
 * add_node - Adds a new node at the beginning of a linked list.
 * @head: A pointer to the address of the head node.
 * @str: The string to be stored in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
	{
		len++;
	}

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
