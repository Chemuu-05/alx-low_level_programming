#include "main.h"

/**
 * print_alphabet - Entry point
 * prints alphabet in lowercase
 * Return: Always void
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
