#include "main.h"
/**
 * _print_rev_recursion
 * make parameter 's'
 * @a: '_print_rev_recursion'
 * @b: '_print_rev_recursion'
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
