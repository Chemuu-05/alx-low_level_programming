#include "main.h"
#include <stdio.h>

/**
 * *cap_string - capitalizes all words of a string
 * @n: the string to be capitalized
 * Return: pointer to the changed string
 */

char *cap_string(char *n)
{
	int a = 0, i;
	int b = 13;
	char c[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (n[a])
	{
		i = 0;

		while (i < b)
		{
			if ((a == 0 || n[a - 1] == c[i]) && (n[a] >= 97 && n[a] <= 122))
				n[a] -= 32;

			i++;
		}

		a++;
	}

	return (n);
}
