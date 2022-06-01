#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks if characters are upper case
 * @c: input character
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c >= ('A') && c <= ('Z'))
	{
		return (1);
	}
	return (0);
}
