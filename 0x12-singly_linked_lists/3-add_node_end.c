#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to the head of the list
 * @str: string to be added to the new node
 *
 * Return: address of the new element or NULL if it fails.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp_node;
	size_t length = 0;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str)
	{
		while (new_node->str[length])
			length++;
	}
	new_node->len = length;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		temp_node = *head;
		while (temp_node->next)
			temp_node = temp_node->next;
		temp_node->next = new_node;
	}
	return (new_node);
}
