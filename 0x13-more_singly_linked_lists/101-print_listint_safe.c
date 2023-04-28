#include "lists.h"
/**
* print_listint_safe - Prints a listint_t linked list
* @head: Pointer to the head of the list
* Return: The number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
size_t count = 0;
const listint_t *node = head, *next_node;
while (node != NULL)
{
count++;
printf("[%p] %d\n", (void *)node, node->n);
next_node = node->next;
if (next_node >= node)
{
printf("-> [%p] %d\n", (void *)next_node, next_node->n);
exit(98);
}
node = next_node;
}
return (count);
}
