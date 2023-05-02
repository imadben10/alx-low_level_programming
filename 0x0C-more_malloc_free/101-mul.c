#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);
int is_digit(char *str);
void multiply_and_print(char *num1, char *num2);

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Error\n");
        exit(98);
    }

    if (!is_digit(argv[1]) || !is_digit(argv[2]))
    {
        printf("Error\n");
        exit(98);
    }

    multiply_and_print(argv[1], argv[2]);

    return (0);
}

int is_digit(char *str)
{
    while (*str)
    {
        if (*str < '0' || *str > '9')
            return (0);
        str++;
    }
    return (1);
}

void multiply_and_print(char *num1, char *num2)
{
    long int result = atol(num1) * atol(num2);

    printf("%ld\n", result);
}
