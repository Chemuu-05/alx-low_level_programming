#include "main.h"

/**
 * reverse_array - reverse array of integders
 * @a: array
 * @n: number of array elements
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int b;
	int c;

	for (b = 0; b < n--; b++)
	{
		c = a[b];
		a[b] = a[n];
		a[n] = c;
	}
}
