#include "lists.h"

/**
 * print_msg - prints a message before the main function is executed
 */
void __attribute__ ((constructor)) print_msg()
{
    printf("You're beat! and yet, you must allow,\n"
           "I bore my house upon my back!\n");
}
