#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: the string to check
 * @c: character to be located
 * Return: NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int n;

	for (n = 0; s[n] >= '\0'; n++)
	{
		if (s[n] == c)
			return (s + n);
	}
	return ('\0');
}
