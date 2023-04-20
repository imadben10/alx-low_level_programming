#include <stdio.h>
#include <stdlib.h>
/**
* main - prints the opcodes of its own main function
* @argc: number of arguments
* @argv: array of arguments
* Return: 0 on success, 1 on incorrect number of arguments, 2 on negative size
*/
int main(int argc, char **argv)
{
int nbytes, i;
char *main_ptr = (char *)main;
if (argc != 2)
{
printf("Error\n");
return (1);
}
nbytes = atoi(argv[1]);
if (nbytes < 0)
{
printf("Error\n");
return (2);
}
for (i = 0; i < nbytes; i++)
{
printf("%02x", main_ptr[i] & 0xff);
if (i == nbytes - 1)
printf("\n");
else
printf(" ");
}
return (0);
}
