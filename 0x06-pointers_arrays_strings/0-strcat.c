#include "main.h"
#include <stdio.h>

/**
 * *_strcat - function that concatenates two strings
 * @dest: Destination string
 * @src: Source string
 * Return: dest.
 */

char *_strcat(char *dest, char *src)
{
	int destL = 0;
	int srcL = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
	{
		destL++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		srcL++;
	}
	for (i = 0; i <= srcL; i++)
	{
		dest[destL + i] = src[i];
	}
	return (dest);
}
