#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * _realloc - reallocates a memory block using malloc and free
  * @ptr: pointer to the memory
  * @old_size: size, in bytes
  * @new_size: new size, in bytes of the new memory block
  * Return:NULL
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *aptr;
	unsigned int b;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		aptr = malloc(new_size);

		if (aptr == NULL)
			return (NULL);

		return (aptr);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	aptr = malloc(new_size);

	if (aptr == NULL)
		return (NULL);

	for (b = 0; b < old_size && b < new_size; b++)
	{
		aptr[b] = ((char *) ptr)[b];
	}

	free(ptr);
	return (aptr);
}
