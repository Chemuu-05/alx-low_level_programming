#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 * Print all the letters except q and e
 * Return: value is o (sucess)
 */

int main(void)
{
	char yes, e, q;

	e = 'e';
	q = 'q';

	for (yes = 'a'; yes <= 'z'; yes++)
	{
	if (yes != e && yes != q)
	putchar(yes);
	}
	putchar('\n');

	return (0);
}
