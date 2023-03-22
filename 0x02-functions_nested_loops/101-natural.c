#include <stdio.h>

/**
 * main - Entr point
 * prints the sum of all the multiples of 3 or 5 below 1024
 * Return: value is 0
 */
int main(void)
{
	int i, sum;

	sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
