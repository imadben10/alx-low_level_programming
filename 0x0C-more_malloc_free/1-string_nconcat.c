#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* string_nconcat - concatenates two strings
* @s1: the first string
* @s2: the second string
* @n: the number of bytes of s2 to concatenate
* Return: a pointer to the concatenated string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *result;
unsigned int len1, len2, i, j;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
len1 = 0;
while (s1[len1] != '\0')
len1++;
len2 = 0;
while (s2[len2] != '\0')
len2++;
if (n >= len2)
n = len2;
result = malloc(sizeof(char) * (len1 + n + 1));
if (result == NULL)
return (NULL);
for (i = 0; i < len1; i++)
result[i] = s1[i];
for (j = 0; j < n; j++, i++)
result[i] = s2[j];
result[i] = '\0';
return (result);
}
