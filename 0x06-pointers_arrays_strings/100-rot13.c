#include "main.h"

/**
 * *rot13 - encodes a string using rot13
 * @n: string to be encoded
 * Return: encoded string
 */

char *rot13(char *n)
{
	int a = 0;

	while (n[a])
	{
		while ((n[a] >= 'a' && n[a] <= 'z') || (n[a] >= 'A' && n[a] <= 'Z'))
		{
			if ((n[a] > 'm' && n[a] <= 'z') || (n[a] > 'M' && n[a] <= 'Z'))
			{
				n[a] -= 13;
				break;
			}

			n[a] += 13;
			break;
		}

		a++;
	}

	return (n);
}


