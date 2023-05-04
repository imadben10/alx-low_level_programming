#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - Entry point. Performs simple operations.
 * @argc: The number of command-line arguments (must be 4)
 * @argv: The command-line arguments (including program name)
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
    int num1, num2, result;
    int (*operation)(int, int);

    if (argc != 4)
    {
        printf("Error\n");
        exit(98);
    }

    num1 = atoi(argv[1]);
    num2 = atoi(argv[3]);

    operation = get_op_func(argv[2]);

    if (operation == NULL || argv[2][1] != '\0')
    {
        printf("Error\n");
        exit(99);
    }

    if ((*operation == op_div || *operation == op_mod) && num2 == 0)
    {
        printf("Error\n");
        exit(100);
    }

    result = (*operation)(num1, num2);
    printf("%d\n", result);

    return (0);
}
