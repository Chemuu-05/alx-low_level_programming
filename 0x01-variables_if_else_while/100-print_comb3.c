#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * prints all possible different combinations of two digits
 * Return: 0 (sucess)
 */

int main(void)
{
	int n, x;

	for (n = '0'; n < '9'; n++)
	{
	for (x = n + 1; x <= '9'; x++)
	}

	{
	if (x != n)
	}

	{
	putchar(n);
	putchar(x);
	if (n == '8' && x == '9')
	putchar(',');
	putchar(' ');
	}
	putchar('\n');

	return (0);
}
