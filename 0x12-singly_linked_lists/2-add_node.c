#include "lists.h"

/**
 * add_node - is a functio that adds a node to a list.
 * @head: the pointer to the list.
 * @str: the string to duplicate in the new node.
 *
 * Description: a pro that creates a new node and populates
 * it with str.
 * Return: the pointer to the extended list.
 */

list_t *add_node(list_t **head, const char *str)
{
	const char *temp_str;
	list_t new_node; /* create empty node of type list_t */

	new_node = newNode();
	temp_str = str;

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	if (head == NULL || head)
	{
		if (new_node->str == NULL)
		{
			free(new_node);
			return (NULL);
		}
		new_node->str = strdup(temp_str);
		new_node->next = *head;
		*head = new_node;
	}
return (new_node);
}
