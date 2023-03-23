#include "main.h"
/**
* sum_multiples - compute the sum of all multiples of 3 or 5 below a limit
* @limit: the upper limit
*
* Return: the sum of all multiples of 3 or 5 below the limit
*/
int sum_multiples(int limit)
{
int sum = 0;
for (int i = 1; i < limit; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
sum += i;
}
}
return sum;
}
