#include "lists.h"

/**
 * print_list - a function to print the elements of a linked list.
 * @h: the linked list.
 *
 * Description: aprog that accepts a linked list and displays its
 * elements.
 * Return: the number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t i;
	const list_t *temp;

	i = 0;
	temp = h;

	while (temp != NULL)
	{
		if (temp->str == NULL)
		{
			printf("(nil)");
		}
		printf("[%d] %s\n", temp->len, temp->str);
		temp = temp->next;
		i++;
	}
return (i);
}
