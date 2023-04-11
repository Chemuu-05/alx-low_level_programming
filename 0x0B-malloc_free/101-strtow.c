#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * **strtow - splits a string into words.
 * @str: string
 * Return:NULL
 */

char **strtow(char *str)
{
	int **s, *p;
	int a, b = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_words(str);
	if (words == 0)
		return (NULL);
	s = (char **) malloc(sizeof(char *) * (words + 1));
	if (s == NULL)
		return (NULL);
	for (a = 0; a <= len; a++)
	{
		if (str[a] == ' ' || str[a] == '\0')
		{
			if (c)
			{
				end = a;
				p = (char *) malloc(sizeof(char) * (c + 1));
				if (p == NULL)
					return (NULL);
				while (start < end)
					*p++ = str[start++];
				*p = '\0';
				s[b] = p - c;
				b++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = a;
	}
	s[b] = NULL;

	return (NULL);
}
