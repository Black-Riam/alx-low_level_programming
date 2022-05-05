#include "main.h"

/**
 * _strncat - concatinate 2 strings.
 * @dest: first string.
 * @src: second string.
 * @n: the number of bytes to use from src.
 * Return: string.
 */

char *_strncat(char *dest, char *src, int n)
{
	int dig = 0, dig2 = 0;
	
	while (*(dest + dig) != '\0')
	{
		dig++;
	}
	
	while (dig2 < n)
	{
		*(dest + dig) = *(src + dig2);
		if (*(src + dig2) == '\0')
			break;
		dig++;
		dig2++;
	}
	return (dest);
}
