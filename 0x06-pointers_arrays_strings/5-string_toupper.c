#include "main.h"
/**
 * string_toupper - change lowwercase to uppercase
 *
 * @str: contains string to be changed to uppercase
 *
 * Return: string
 */

char *string_toupper(char *str)
{
int i;
int diff = 32;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] > 96 && str[i] < 123)
{
str[i] = str[i] - diff;
}

}
return (str);
}
