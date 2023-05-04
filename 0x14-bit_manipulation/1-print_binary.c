#include "main.h"

/**
* print_binary - Prints the binary representation of a number.
* @n: The unsigned long integer to be converted to binary.
*/
void print_binary(unsigned long int n)
{
unsigned long int mask;
if (n == 0)
{
_putchar('0');
return;
}
mask = 1UL << ((sizeof(unsigned long int) * 8) - 1);
while ((mask & n) == 0)
{
mask >>= 1;
}
while (mask)
{
_putchar((n & mask) ? '1' : '0');
mask >>= 1;
}
}
