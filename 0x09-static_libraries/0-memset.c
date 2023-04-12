#include "main.h"
char *_memset(char *s, char b, unsigned int n)
{
    char *ptr = s;
    while (n--)
        *ptr++ = (unsigned char) b;
    return (s);
}
