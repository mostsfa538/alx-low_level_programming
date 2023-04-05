#include "main.h"
/**
 *  _print_rev_recursion - Print a string in reverse
 *  @s: The string to be print
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
