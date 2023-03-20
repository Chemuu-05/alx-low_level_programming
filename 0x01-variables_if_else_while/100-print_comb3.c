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
	int n, p, q;

	for (n = '0'; n < '9'; n++)
	{
		for (p = n + 1; p <= '9'; p++)
		{
			for (q = p + 1; q <= '9'; q++)
			{
				if ((p != n) != q)
				{
					putchar(n);
					putchar(p);
					putchar(q);
					if (n == '7' && p == '8')
						continue;
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
