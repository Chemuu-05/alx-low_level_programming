#include "function_pointers.h"

/**
  * int_index - function that searches for an integer.
  * @array: the number of elements in the array
  * @size: size of elements in array
  * @cmp: pointer to the function to be used to compare values
  * Return: 0
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int n = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (n < size)
			{
				if (cmp(array[n]))
					return (n);

				n++;
			}
		}
	}
	return (-1);
}
