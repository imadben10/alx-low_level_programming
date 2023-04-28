#include "main.h"

/**
* find_sqrt - helper function to recursively find the square root of n
* @n: the number to find the square root of
* @i: the current guess for the square root
* Return: the square root of n if it is a perfect square, -1 otherwise
*/
int find_sqrt(int n, int i)
{
if (i * i > n)
return (-1);
if (i * i == n)
return (i);
return (find_sqrt(n, i + 1));
}
/**
* _sqrt_recursion - returns the natural square root of a number
* @n: the number to find the square root of
* Return: the square root of n if it is a perfect square, -1 otherwise
*/
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (find_sqrt(n, 1));
}
