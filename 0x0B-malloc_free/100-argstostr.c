#include "main.h"
#include <stdlib.h>
/**
* argstostr - concatenates all the arguments of your program.
* @ac: argument count.
* @av: pointer to array of size ac containing arguments.
* Return: pointer to a new string containing all the arguments, separated by
* a newline character ('\n'), or NULL if ac == 0, av == NULL or malloc
*fails.
*/
char *argstostr(int ac, char **av)
{
int i, j, size = 0;
char *s;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
size++;
size++; /* account for newline character */
}
size++; /* account for terminating null character */
s = malloc((size + ac) * sizeof(char));
if (s == NULL)
return (NULL);
for (i = 0, j = 0; i < ac; i++)
{
while (*av[i])
s[j++] = *av[i]++;
s[j++] = '\n';
}
s[j++] = '\0';
return (s);
}
