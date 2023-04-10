#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * main - Prints the sum of args positive numbers
  * @argc: argument count
  * @argv: argument vector
  * Return: Always zero
  */

int main(int argc, char *argv[])
{
	int n;
	unsigned int p, sum = 0;
	char *s;

	if (argc > 1)
	{
		for (n = 1; n < argc; n++)
		{
			s = argv[n];

			for (p = 0; p < strlen(s); p++)
			{
				if (s[p] < 48 || s[p] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(s);
			s++;
		}

		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
