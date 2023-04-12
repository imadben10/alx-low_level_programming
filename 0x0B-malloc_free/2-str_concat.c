#include "main.h"
#include <stdlib.h>
/**
* str_concat - Concatenates two strings
* @s1: The first string
* @s2: The second string
* Return: Pointer to the concatenated string
*/
char *str_concat(char *s1, char *s2)
{
unsigned int i, j, k;
char *s;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (i = 0; s1[i] != '\0'; i++)
;
for (j = 0; s2[j] != '\0'; j++)
;
s = malloc((i + j + 1) * sizeof(char));
if (s == NULL)
return (NULL);
for (k = 0; k < i; k++)
s[k] = s1[k];
for (k = 0; k < j; k++)
s[k + i] = s2[k];
s[i + j] = '\0';
return (s);
}
