#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * prints all possible different combinations of two digits
 * Return:value is 0 (sucess)
 */
int main(void)
{
	int n;
	int x;

	for (n = 0; n < 10; n++)
	{
	for (x = n + 1; x < 10; x++)
	{
		if (n < x && n != x)
		{
			putchar(n + '0');
			putchar(x + '0');
			putchar(',');
			putchar(' ');
		}
	}
	}
	putchar('\n');
	return (0);
}
