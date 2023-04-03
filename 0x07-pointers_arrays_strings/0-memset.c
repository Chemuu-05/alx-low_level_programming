#include "main.h"

/**
 * _memset -  fills memory with a constant byte.
 * @n: bytes of a memory
 * @s: pointer to memory area
 * @b: constant byte
 * Return: memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;
	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
