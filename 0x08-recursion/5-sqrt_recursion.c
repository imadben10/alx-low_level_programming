#include "main.h"

/**
* _sqrt - calculates the natural square root of a number
* @n: the number to calculate the square root of
* @guess: the current guess for the square root
* Return: the square root of n or -1 if n does not have a natural square root
*/
int _sqrt(int n, int guess)
{
if (guess * guess == n)
return guess;
else if (guess * guess > n)
return -1;
else
return _sqrt(n, guess + 1);
}
/**
* _sqrt_recursion - calculates the natural square root of a number
* @n: the number to calculate the square root of
* Return: the square root of n or -1 if n does not have a natural square root
*/
int _sqrt_recursion(int n)
{
if (n < 0)
return -1;
else
return _sqrt(n, 0);
}
