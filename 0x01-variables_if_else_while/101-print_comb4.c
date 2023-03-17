#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * prints all possible different combinations of three digits.
 * Return: value is 0
 */

int main(void)
{
	int n, x, z;

	for (n = '0'; n < '9'; n++)
	{

	for (x = n + 1; x <= '9'; x++)
	{

	for (z = x + 1; z <= '9'; z++)
	{
	if ((x != n) != z)
	{
	putchar(n);
	putchar(x);
	putchar(z);
	if (n == '7' && x == '8')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');

	return (0);
}
