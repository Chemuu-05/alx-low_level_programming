#include "main.h"
#include <stdlib.h>

/**
 * _strstr - function that locates a substring.
 * @needle:substring
 * @haystack: main string
 * Return:pointer to the beginning of the located substring or
 * NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int a, b;

	b = 0;

	while (*haystack)
	{
		for (a = 0; needle[a]; a++)
		{
			if (haystack[a] != needle[a])
				break;
		}
		if (a != b)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}
