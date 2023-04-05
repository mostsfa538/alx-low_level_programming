#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: integer to swap
 * @b: integer to swap
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rec_recursion(s + 1);
		putchar(*s);
	}
}
