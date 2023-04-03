#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: segment where we get bytes
 * @accept: the bytes
 * Return: number of bytes in initial segment of s with bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, n;
	int p = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] != 32)
		{
			for (n = 0; accept[n] != '\0'; n++)
			{
				if (s[a] == accept[n])
					p++;
				else
				{
					return (p);
				}
			}
		}
	}
	return (p);
}
