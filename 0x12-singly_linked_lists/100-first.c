#ifndef _FIRST_H_
#define _FIRST_H_

#include <stdio.h>

void __attribute__ ((constructor)) print_msg();

#endif /* _FIRST_H_ */

/**
 * print_msg - prints a message before the main function is executed
 */
void print_msg(void)
{
    printf("You're beat! and yet, you must allow,\n"
           "I bore my house upon my back!\n");
}
