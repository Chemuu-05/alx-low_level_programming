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

	while (dest[destL])
	{
		destL++;
	}

	while (j < n && src[j])
	{
		dest[destL] = src[j];
		destL++;
		j++;
	}

	dest[destL + n + 1] = '\0';

	return (dest);
}
