#include "main.h"

/**
 * flip_bits - computes the number of bits needed to be flipped
 *
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits to flip
 */


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	unsigned int flipped = 0;


	for (i = 0; i <= 63; i++)
	{
		if ((n & 1) != (m & 1))
			flipped++;
		n >>= 1;
		m >>= 1;
	}

	return (flipped);
}
