#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * prints the alphabet in lowercase, and then in uppercase
 * Return: value is 0 (sucess)
 */

int main(void)
{
	char yes;

	for (yes = 'a'; yes <= 'z'; yes++)
	putchar(yes);

	for (yes = 'A'; yes <= 'Z'; yes++)
	putchar (yes);
	putchar('\n');

	return (0);
}
