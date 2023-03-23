#include "main.h"

/**
* _isupper - checks for uppercase character
* @c: Variable text
* Return: Always 0.
*/
int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return 0;
	else
		return 1;
}
