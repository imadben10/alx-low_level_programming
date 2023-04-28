#include "main.h"
/**
* _puts_recursion - prints a string, followed by a new line
* @s: pointer to the string to print
*/
void _puts_recursion(char *s)
{
if (*s == '\0') /* base case: end of string */
{
_putchar('\n'); /* print a new line character */
return;
}
_putchar(*s); /* print the current character */
_puts_recursion(s + 1); /* make a recursive call with the next character */
}
