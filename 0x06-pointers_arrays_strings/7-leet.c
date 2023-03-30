#include "main.h"

/**
 * *leet - encodes a string into 1337
 * @n: string to be encoded
 * Return: encoded string
 */

char *leet(char *n)
{
	int a = 0, b = 0, c = 5;
	char x[5] = {'A', 'E', 'O', 'T', 'L'};
	char y[5] = {'4', '3', '0', '7', '1'};

	while (n[a])
	{
		b = 0;

		while (b < c)
		{
			if (n[a] == x[b] || n[a] - 32 == x[b])
			{
				n[a] = y[b];
			}

			b++;
		}

		a++;
	}

	return (n);
}
