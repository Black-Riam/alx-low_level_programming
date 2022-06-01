#include "main.h"

/**
 * reverse_array - reverse array
 *
 * @a: contains array to be reversed
 * @n: number of elements in an array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
int i, j, rev;

for (i = 0, j = n - 1; i < j; i++, j--)
{
rev = a[i];
a[i] = a[j];
a[j] = rev;
}
}
