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
	int a;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		a = 0;

		{
			if (needle[a + 1] == '\0')
				return (haystack);
			a++;

			while
				(haystack[a] == needle[a]);
		haystack++;
		}
	}
	return ('\0');
}
