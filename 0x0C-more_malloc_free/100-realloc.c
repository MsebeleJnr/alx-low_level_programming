#include "main.h"
#include <stdlib>

/**
 * _realloc - reallocates a memory block.
 * @ptr: pointer to the memory previously alocated.
 * @old_size: size, in bytes, of the allocated space of ptr
 * @new_size: new size, in bytes, of the new memory block
 *
 * Return: ptr.
 * if new_size ==old_size, returns ptr without changes
 * if malloc fails, returns NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int f
		f, g;
	char *newPtr;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	newPtr = malloc(new_size * sizeof(char));
			if (newPtr == NULL)
				return (NULL);

	if (new_size > old_size)
	{
		for (f = 0; f < old_size; f++)
		{
			newPtr[f] = ((char *)ptr)[f];
		}
		free(ptr);
		return (newPtr);
	}
	else
	{
		for (g = 0; g < new_size; g++)
		{
			newPtr[g] = ((char *)ptr)[g];
		}
		free(ptr);
		return (newPtr);
	}
}
