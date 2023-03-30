#include "main.h"

/**
 * *string_toupper - changes all lowercase letters of a string to uppercase.
 * @p: the string to be modified
 * Return: p
 */

char *string_toupper(char *p)
{
	int a;

	a = 0;
	while (p[a] != '\0')
	{
		if (p[a] != 'a' && p[a] <= 'z')
			p[a] = p[a] - 32;
		a++;
	}
	return (p);
}
