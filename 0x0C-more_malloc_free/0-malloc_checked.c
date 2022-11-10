#include "main.h"
/**
 *malloc_checked - allocates memory using malloc by checking its return value
 *@b: number of bytes to be allocated
 *Return: the pointer to the memory allocated
 */
void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc(b);
	if (m == NULL)
	{
		exit(98);
	}
	return (m);
}
