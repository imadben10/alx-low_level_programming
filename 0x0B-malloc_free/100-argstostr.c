#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* argstostr - concatenates all the arguments of a program
* @ac: the number of arguments
* @av: the array of arguments
* Return: a pointer to the concatenated string
*/
char *argstostr(int ac, char **av)
{
char *str;
int i, j, len = 0, pos = 0;
/* Return NULL if ac == 0 or av == NULL */
if (ac == 0 || av == NULL)
return (NULL);
/* Calculate the total length of the arguments */
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
len++;
}
len++; /* Add 1 for the new line character */
}
/* Allocate memory for the concatenated string */
str = malloc(sizeof(char) * len);
if (str == NULL)
return (NULL);
/* Copy the arguments into the concatenated string */
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
str[pos++] = av[i][j];
}
str[pos++] = '\n';
}
str[pos] = '\0'; /* Terminate the string with a null byte */
return (str);
}
