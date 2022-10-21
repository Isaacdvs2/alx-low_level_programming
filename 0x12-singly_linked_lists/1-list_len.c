#include "lists.h"

/**
 * list_len - a function that returns the number of elements in a list.
 * @h: a pointer to the list.
 *
 * Description: a prog that counts the number of elements in a list.
 * Return: the number of elements in a list.
 */

size_t list_len(const list_t *h)
{
	size_t i;
	const list_t *temp;

	temp = h;

	while (temp != NULL)
	{
		if (temp->str != NULL || temp->str != '\0')
			i++;
		if (temp->len != NULL)
			i++;
		temp = temp->next;
	}
return (i);
}
