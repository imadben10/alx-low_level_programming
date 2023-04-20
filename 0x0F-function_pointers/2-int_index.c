#include <stdlib.h>
/**
* int_index - searches for an integer
* @array: the array of integers
* @size: the size of the array
* @cmp: the pointer to the function to be used to compare values
* Return: the index of the first element for which cmp does not return 0,
* or -1 if no element matches or if size <= 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i, result;
if (array == NULL || cmp == NULL)
return (-1);
if (size <= 0)
return (-1);
for (i = 0; i < size; i++)
{
result = cmp(array[i]);
if (result != 0)
return (i);
}
return (-1);
}
