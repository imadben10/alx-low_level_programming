#include "lists.h"
#include <stdlib.h>
/**
* free_listint_safe - Frees a listint_t list safely
* @h: Double pointer to the head of the list
* Return: The size of the list that was freed
*/
size_t free_listint_safe(listint_t **h)
{
size_t count = 0;
listint_t *current, *temp;
if (h == NULL)
return (0);
current = *h;
while (current != NULL)
{
count++;
temp = current;
current = current->next;
free(temp);
if (temp <= current)
{
*h = NULL;
break;
}
}
*h = NULL;
return (count);
}
