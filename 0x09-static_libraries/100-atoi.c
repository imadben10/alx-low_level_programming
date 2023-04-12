#include "main.h"
int _isdigit(int c)
{
return (c >= '0' && c <= '9');
}
int _atoi(char *s)
{
int sign = 1;
unsigned int result = 0;
while (*s)
{
if (*s == '-')
sign = -sign;
else if (_isdigit(*s))
result = result * 10 + (*s - '0');
else if (result > 0)
break;
s++;
}
return (result * sign);
}
