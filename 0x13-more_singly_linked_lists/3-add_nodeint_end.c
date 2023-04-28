#include "lists.h"
/**
* add_nodeint_end - Adds a new node at the end of a listint_t list.
* @head: A pointer to a pointer to the head of the listint_t list.
* @n: The integer value to store in the new node.
* Return: If the function fails - NULL.
* Otherwise - the address of the new element.
**/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new, *temp;
new = malloc(sizeof(listint_t));
if (!new)
return (NULL);
new->n = n;
new->next = NULL;
if (!*head)
*head = new;
else
{
temp = *head;
while (temp->next)
temp = temp->next;
temp->next = new;
}
return (new);
}
