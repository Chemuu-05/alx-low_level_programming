#include "main.h"

/**
  * rev_string - Reverses a string
  * @s: The string to be reversed
  *
  * Return: nothing
  */

void rev_string(char *s)
{
	int i;
	int c = 0;
	char rev = s[0];

	while (s[c] != '\0')
	{
		c++;
	}
	for (i = 0; i < c; i++)
	{
		c--;
		rev = s[i];
		s[i] = s[c];
		s[c] = rev;
	}
}
