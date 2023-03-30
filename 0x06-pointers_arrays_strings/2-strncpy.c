#include "main.h"

/**
 * *_strncpy - function that copies a string
 * @dest: Destination of the string
 * @src: Source string
 * @n: number of strings
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
