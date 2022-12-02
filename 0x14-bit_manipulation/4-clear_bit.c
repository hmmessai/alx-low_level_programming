#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 *
 * @n: the address to the variable holding the value
 * @index: the index to set the bit to 0
 *
 * Return: 1 if it worked
 *	-1 if an error occured
 */


int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;
	int c = 1;

	if (n == NULL || index > 64)
		return (-1);

	for (i = 0; i < index; i++)
		c <<= 1;

	*n = *n & ~c;

	return (1);
}
