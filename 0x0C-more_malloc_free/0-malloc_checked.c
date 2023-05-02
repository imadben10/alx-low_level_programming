#include "main.h"
#include <stdio.h>
void *malloc_checked(unsigned int b);

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *c;
    int *i;
    float *f;
    double *d;

    c = malloc_checked(sizeof(char) * 1024);
    printf("%p\n", (void *)c);
    i = malloc_checked(sizeof(int) * 402);
    printf("%p\n", (void *)i);
    f = malloc_checked(sizeof(float) * 100000000);
    printf("%p\n", (void *)f);
    d = malloc_checked(sizeof(double) * 1024 * 1024);
    printf("%p\n", (void *)d);
    free(c);
    free(i);
    free(f);
    free(d);
    return (0);
}

/**
 * malloc_checked - Allocates memory using malloc
 *
 * @b: Size in bytes to be allocated
 *
 * Return: A pointer to the allocated memory, or if malloc fails,
 * the function causes normal process termination with a status value of 98.
 */
void *malloc_checked(unsigned int b)
{
    void *p;

    p = malloc(b);
    if (p == NULL)
        exit(98);

    return (p);
}
