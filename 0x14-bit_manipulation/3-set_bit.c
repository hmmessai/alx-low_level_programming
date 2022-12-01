#include "main.h"

/**
 * sets the value of a bit to 1 at a given index
 *
 * @n: the pointer to the number to be set
 * @index: the index of the number to be set to 1
 *
 * Return: 1 if it worked
 * 	-1 if an error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;
	unsigned int num = 1;

	if (n == NULL || index > 64)
		return (-1);

	for (i = 0; i < index; i++)
		num <<= 1;

	*n = *n | num;

	return (1);
}
