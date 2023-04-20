#include "function_pointers.h"
#include <stdio.h>
/**
* print_name - prints a name using the given function
* @name: name to print
* @f: function to use to print the name
* Return: void
*/
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
