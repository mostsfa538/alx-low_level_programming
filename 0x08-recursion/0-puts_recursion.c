#include "main.h"
/**
 * reset_to_98 - a function that takes a char
 * and updates the value it points to to 98
 * @n: input
 * Return: string
 */
void _puts_recursion(char *s);
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
