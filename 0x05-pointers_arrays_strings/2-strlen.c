#include "main.h"
/**
 * _strlen - returns the length of a string.
 * @s: string to count
 * Return: Length of a string
 */

int _strlen(char *s)
{
	int i;

	for (; *s != '\0'; s++)
	{
		i++;
	}
	return (i);
}
