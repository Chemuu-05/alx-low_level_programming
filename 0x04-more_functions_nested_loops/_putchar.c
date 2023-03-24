#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character to stdout
 * @c: The character to print
 * Return: on sucess 1,otherwise 0
 */
int _putchar(int c)
{
	return(write(1, &c,1));
}
