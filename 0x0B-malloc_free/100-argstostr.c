#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * argstostr -  concatenates all the arguments of your program.
  * @ac: the argument count
  * @av: the argument vector
  * Return: NULL
  */

char *argstostr(int ac, char **av)
{
	int m = 0, n = 0, o = 0, p = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (n < ac)
	{
		while (av[n][o])
		{
			m++;
			o++;
		}

		o = 0;
		n++;
	}

	s = malloc((sizeof(char) * m) + ac + 1);

	n = 0;
	while (av[n])
	{
		while (av[n][o])
		{
			s[p] = av[n][o];
			p++;
			o++;
		}

		s[p] = '\n';

		o = 0;
		p++;
		n++;
	}

	p++;
	s[p] = '\0';
	return (s);
}
