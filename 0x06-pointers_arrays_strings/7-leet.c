#include "main.h"

/**
 * leet - encode characters
 * @c: contain strings
 * Return: string
 */

char *leet(char *c)
{
int i, j;
char letters[] = {'A', 'E', 'O', 'T', 'L'};
int numbers[] = {4, 3, 0, 7, 1};

for (i = 0; c[i] != '\0'; i++)
{
for (j = 0; letters[j] != '\0'; j++)
{
if (c[i] == letters[j] || c[i] == letters[j] + 32)
{
c[i] = 48 + numbers[j];
}
}
}
return (c);
}
