#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: Destination string
 * @src: Source string
 * @n: Number of characters to append
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int destL = 0;
	int j = 0;

	for (j = 0; dest[destL] != '\0'; j++)
	{
		destL++;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		srcL++;
	}
	for (j = 0; j < n; j++)
	{
		dest[destL + j] = src[j];
	}
	return (dest);
}
