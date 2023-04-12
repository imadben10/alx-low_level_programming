#include "main.h"
char *_strstr(char *haystack, char *needle)
{
int i, j, flag;
if (*needle == 0)
return (haystack);
for (i = 0; haystack[i] != '\0'; i++)
{
if (haystack[i] == needle[0])
{
flag = 1;
for (j = 1; needle[j] != '\0'; j++)
{
if (haystack[i + j] != needle[j])
{
flag = 0;
break;
}
}
if (flag)
return (haystack + i);
}
}
return (0);
}
