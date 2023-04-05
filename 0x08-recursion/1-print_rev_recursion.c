#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: String to be printed
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(*s);
		return;
	}
	s++;
	_print_rev_recursion(s);
	s--;
}
