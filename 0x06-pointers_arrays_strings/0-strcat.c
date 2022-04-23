#include "main.h"

/**
 * _strcat - concatinate 2 strings.
 * @dest: first string.
 * @src: second string.
 * Return: string.
 */

char *_strcat(char *dest, char *src)
{
	int num = 0, num2 = 0;
	
	while(*(dest + num) != '\0')
	{
		num++;
	}
	
	while (num2 >= 0)
	{
		*(dest + num) = *(src + num2);
		if (*(src + num2) == '\0')
			break;
		num++;
		num2++;
	}
	return (dest);
}
