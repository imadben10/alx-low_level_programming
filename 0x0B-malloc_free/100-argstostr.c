#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* argstostr - Concatenates all the arguments of your program
* @ac: The number of arguments
* @av: An array of pointers to strings containing the arguments
* Return: A pointer to a new string, or NULL if it fails
*Each argument should be followed by a \n in the new string
*/
char *argstostr(int ac, char **av)
{
char *str;
int i, j, len = 0, k = 0;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
len++;
}
len++;
}
str = malloc(sizeof(char) * (len + 1));
if (str == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
str[k] = av[i][j];
k++;
}
str[k] = '\n';
k++;
}
str[k] = '\0';
return (str);
}
