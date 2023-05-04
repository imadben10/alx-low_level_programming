#include "main.h"

/**
* flip_bits - Returns the number of bits you would need to flip to get from one number to another.
* @n: The first unsigned long integer.
* @m: The second unsigned long integer.
*
* Return: The number of bits needed to flip to get from n to m.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor_result = n ^ m;
unsigned int flip_count = 0;
while (xor_result)
{
flip_count += xor_result & 1;
xor_result >>= 1;
}
return (flip_count);
}
