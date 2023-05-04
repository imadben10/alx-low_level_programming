#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string of 0 and 1 chars.
 *
 * Return: The converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1, or
 * b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int decimal = 0;

    if (b == NULL)
    {
        return (0);
    }

    for (; *b != '\0'; b++)
    {
        if (*b == '0' || *b == '1')
        {
            decimal = (decimal << 1) | (*b - '0');
        }
        else
        {
            return (0);
        }
    }

    return (decimal);
}

