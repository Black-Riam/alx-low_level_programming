#include "main.h"

/**
 * _strcmp - compare two strings
 *
 *@s1: string one to be compared
 *@s2: string two to be compared
 *
 * Return: 0 for equal, greater than 0 or less than 0
 */

int _strcmp(char *s1, char *s2)
{

int comp = 0;
int i = 0;

while (s1[i])
{
if (s1[i] != s2[i])
{
comp = ((s1[i] - '\0') - (s2[i] - '\0'));
break;
}
i++;
}

return (comp);
}
