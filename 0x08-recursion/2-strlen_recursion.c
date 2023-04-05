#include "main.h"
/**
 * _strlen_recursion - Return length of string
 * @s: The string to be measured
 *
 * return: the length of string
 */
int _strlen_recursion(char *s)
{
	int con = 0;

	if (*s)
	{
		con++;
		con += _strlen_recursion(s + 1);
	}
	return (con);
}
