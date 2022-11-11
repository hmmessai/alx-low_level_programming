#include "main.h"
/**
 *_realloc - reallocates a memory block
 *@ptr: pointer ot the memory previously allocated
 *@old_size: is the size of the allocated space of ptr
 *@new_size: is the new size of the new memory block
 *Return: pointer to the new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr = malloc(new_size);

	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
