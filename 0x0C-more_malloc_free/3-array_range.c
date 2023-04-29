#include "main.h"
#include <stdlib.h>

/**
* array_range - creates an array of integers
* @min: minimum value of the range
* @max: maximum value of the range
* Return: pointer to the newly created array
*         NULL if min > max or if malloc fails
*/
int *array_range(int min, int max)
{
int *arr, i;
if (min > max)
return (NULL);
arr = malloc(sizeof(int) * (max - min + 1));
if (arr == NULL)
return (NULL);
for (i = 0; min + i <= max; i++)
arr[i] = min + i;
return (arr);
}
