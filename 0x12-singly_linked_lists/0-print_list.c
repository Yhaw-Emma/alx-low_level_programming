#include "lists.h"


/**
 * print_list - Prints the strings stored in a linked list.
 * @head: A pointer to the head node of the list.
 */
void print_list(const list_t *head)
{
    const list_t *current = head;

    while (current != NULL)
    {
        printf("%s\n", current->str);
        current = current->next;
    }
}