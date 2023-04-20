#include <stdio.h>
#include "variadic_functions.h"

/**
  * print_strings - function that prints strings
  * @separator: the string to be printed between the strings
  * @n: the number of strings passed to the function
  * Return: void
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int p = 0;
	char *string;

	if (n > 0)
	{
		va_start(args, n);

		while (p < n)
		{
			string = va_arg(args, char *);
			if (string == NULL)
				printf("%s", "(nil)");
			else
				printf("%s", string);

			if (p != n - 1 && separator != NULL)
				printf("%s", separator);

			p++;
		}

		va_end(args);
	}

	printf("\n");
}
