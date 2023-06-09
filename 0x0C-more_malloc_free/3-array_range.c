#include "main.h"
#include <stdlib.h>

/**
  * array_range - creates an array of integers.
  * @min: minimum value
  * @max: maximum value
  * Return: integer value
  */

int *array_range(int min, int max)
{
	int *p, n = 0;

	if (min > max)
		return (NULL);

	p = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (p == NULL)
		return (NULL);

	while (min <= max)
	{
		p[n] = min;
		n++;
		min++;
	}

	return (p);
}
