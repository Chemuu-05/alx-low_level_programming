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
	int n, p;

	for (n = '0'; n < '9'; n++)
	{
		for (p = 1; p < '9'; p++)
		{
			if (n < p && n != p)
			{
				putchar(n + '0');
				putchar(p + '0');
				if (n + p != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
