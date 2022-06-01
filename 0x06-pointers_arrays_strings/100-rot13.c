#include "main.h"

/**
 * rot13 - encode a string using ROT13
 * @str: contains string
 * Return: string
 */

char *rot13(char *str)
{
int i, j;
char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (j = 0; str[j] != '\0'; j++)
{
for (i = 0; a[i] != '\0'; i++)
{
if (str[j] == a[i])
{
str[j] = b[i];
break;
}
}

}

return (str);
}
