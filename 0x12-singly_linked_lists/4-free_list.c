#include "lists.h"

/**
 * free_list - a function that frees a list from memory.
 * @head: the pointer to the list to be freed.
 *
 * Description: a function that frees a list from memory using
 * malloc and free.
 * Return: void, no data returned
 */

void free_list(list_t *head)
{
	list_t *temp; /* declare a pointer to list */
	list_t *last;	/* declare another list pointer to swap with */

	temp = head; /* assign head of list to temp pointer */

	while (temp != NULL)
	{
		last = temp->next; /* swap null pointer (next) with last pointer */
		free(temp->str); /* remove/free str from data node */
		free(temp);	/* free the node */
		temp = last;	/* free the ptr by pointing it to null */
	}
}
