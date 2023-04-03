#include "main.h"

/**
 * *_memset -  fills memory with a constant byte.
 * @n: bytes of a memory
 * @s:pointer to memory area
 * @b: constant byte
 * Return: memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
