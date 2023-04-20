#include <stddef.h>
#include "function_pointers.h"
/**
* print_name - Prints a name.
* @name: A pointer to a string that contains a name.
* @f: A pointer to a function that prints a name.
*
* Return: void.
*/
void print_name(char *name, void (*f)(char *))
{
if (name && f)
f(name);
}
/**
* array_iterator - Executes a function on each element of an array.
* @array: A pointer to an array of integers.
* @size: The size of the array.
* @action: A pointer to a function that takes an integer as an argument.
* Return: void.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array && action)
for (i = 0; i < size; i++)
action(array[i]);
}
