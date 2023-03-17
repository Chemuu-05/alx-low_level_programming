#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * prints the lowercase alphabet in reverse
 * Return: equals to
 */

int main(void)
{
	char yes;

	for (yes = 'z'; yes >= 'a'; yes--)
	putchar(yes);
	putchar('\n');

	return (0);
}
