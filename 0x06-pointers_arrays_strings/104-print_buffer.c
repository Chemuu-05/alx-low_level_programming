#include "main.h"
#include <stdio.h>

/**
 * print_buffer -  prints a buffer.
 * @size: size content of the buffer
 * Return: nothing
 */

void print_buffer(char *b, int size)
{
	int a;
	int b;
	int c;

	a = 0;
	if (size <= 0 )
	{
		printf('\n');
		return;
	}
	while (a < size)
	{
		b = size - a 
