#include "main.h"

/**
 * _strncpy -  copy second string to one
 *
 *@dest: string that will be copied to
 *@src: it will copy to dest string
 *@n: number of byte of src
 *
 * Return: return a dest string
 */

char *_strncpy(char *dest, char *src, int n)
{
int i = 0;

while (src[i] != '\0' && i < n)
{
dest[i] = src[i];
i++;
}

while (i < n)
{
dest[i] = '\0';
i++;
}

return (dest);
}
