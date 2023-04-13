#include "main.h"
#include <stdlib.h>

/**
  * _calloc - allocates memory for an array
  * @nmemb: number of members
  * @size: size
  * Return: If nmemb or size is 0, then _calloc returns NULL
  * If malloc fails, then _calloc returns NULL
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int n = 0, m = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	m = nmemb * size;
	p = malloc(m);

	if (p == NULL)
		return (NULL);

	while (n < m)
	{
		p[n] = 0;
		n++;
	}

	return (p);
}
