#include "main.h"
/**
 * isupper - checkes upper case.
 * @c: print int
 * Return: give 1 or 0
 */

int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
