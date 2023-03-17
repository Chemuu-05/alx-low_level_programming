#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *  prints all single digit numbers of base 10 starting from 0
 *  Return: value 0
 */

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	putchar(n);
	putchar('\n');

	return (0);
}
