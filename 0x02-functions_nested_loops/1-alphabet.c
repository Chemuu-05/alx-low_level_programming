#include "main.h"

/**
 * print_alphabet - Entry point
 * prints alphabet in lowercase
 * Return: Always 0.
 */

void print_alphabet(void)

{
	int start = 'a', end = 'z';
	{
		while (start <= end)
		{
			_putchar(start);
			start++;
		}
		_putchar('\n');
	}
}
