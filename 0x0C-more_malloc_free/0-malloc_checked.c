#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - Allocates memory using malloc
* @b: Size of memory to allocate
* Return: Pointer to the allocated memory
*         Exit with status 98 if malloc fails
*/
void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
exit(98);
return (ptr);
}
