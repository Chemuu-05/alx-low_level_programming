#include "function_pointers.h"
#include <stdio.h>

/**
  * array_iterator - executes a function given as a parameter on each element
  * @array: array
  * @size: the size of the array
  * @action: pointer to the function you need to use
  * Return: void
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int n = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (n < size)
		{
			action(array[n]);
			n++;
		}
	}
}
