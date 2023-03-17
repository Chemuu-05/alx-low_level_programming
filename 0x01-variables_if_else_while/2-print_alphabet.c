#include <stdio.h>

/**
 * main - Entry point
 * prints the alphabet in lowercase
 * Return: value 0 (sucess)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	putchar(c);
	putchar('\n');
	return (0);
}
