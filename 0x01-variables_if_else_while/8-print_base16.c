#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * prints all the numbers of base 16 in lowercase
 * Return: value is 0
 */

int main(void)
{
	int n;
	char yes;

	for (n = '0'; n <= '9'; n++)
	putchar(n);

	for (yes = 'a'; yes <= 'b'; yes++)
	putchar(yes);
	putchar('\n');

	return (0);
}
