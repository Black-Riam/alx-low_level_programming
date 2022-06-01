#include "main.h"

/**
 * separator - check for special character
 * @c: contain string
 * Return: 0 or 1
 */

int separator(char c)
{
char sep[] = " \t\n,;.!?\"(){}";
int i;
for (i = 0; i < 13; i++)
{
if (c == sep[i])
{
return (1);
}
}
return (0);
}

/**
 * cap_string - Capitalize each words
 *
 * @str: contains string
 *
 * Return: string
 */

char *cap_string(char *str)
{
int i;

if (str[0] > 96 && str[0] < 123)
{
str[0] = str[0] - 32;
}
for (i = 1; str[i]; i++)
{
if ((separator(str[i - 1])) && (str[i] > 96 && str[i] < 123))
{
str[i] = str[i] - 32;
}
}
return (str);
}
