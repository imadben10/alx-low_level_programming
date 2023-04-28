#include "lists.h"
#include <stdlib.h>
/**
* pop_listint - Deletes the head node of a linked list and returns its data
* @head: Pointer to a pointer to the first node of the list
* Return: The data of the head node that was deleted, or 0 if the list is empty
*/
int pop_listint(listint_t **head)
{
listint_t *temp;
int n;
if (*head == NULL)
return (0);
temp = *head;
n = temp->n;
*head = (*head)->next;
free(temp);
return (n);
}
