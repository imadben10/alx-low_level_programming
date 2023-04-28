#include "lists.h"
/**
* delete_nodeint_at_index - deletes the node at index of a linked list
* @head: pointer to the head node
* @index: index of the node to be deleted
* Return: 1 on success, -1 on failure
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current, *prev;
unsigned int i = 0;
if (head == NULL || *head == NULL)
return (-1);
current = *head;
prev = NULL;
while (current != NULL && i < index)
{
prev = current;
current = current->next;
i++;
}
if (current == NULL)
return (-1);
if (prev == NULL)
*head = current->next;
else
prev->next = current->next;
free(current);
return (1);
}
