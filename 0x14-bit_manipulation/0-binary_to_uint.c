#include "main.h"

/**
 * binary_to_uint - converts binary number to an unsigned int
 *
 * @b: pointer to a string of 1's and 0's
 *
 * Return: the converted number
 * 	zero if b contains non binary characters or is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i;
	int len = 0, bnum;
	int n = 0;

	if (b != NULL)
	{
		for (i = 0; b[i]; i++)
			len++;

		for (--len; len >= 0; len--)
		{
			if (b[len] != '0' && b[len] != '1')
				return (0);
			if (b[len] == '0')
				bnum = 0;
			if (b[len] == '1')
				bnum = 1;

			num += power(2, n) * bnum;
			n++;
		}

		return (num);
	}

	return (0);
}

#include "main.h"
/**
 *power - computes the value of x raised to y
 *@x: the number to be multiplied y times
 *@y: the number of times x will be multiplied
 *Return: the value of x raised to y
 */
int power(int x, int y)
{
	int res;

	if (y < 0)
		return (-1);
	if (y == 0)
	{
		return (1);
	}
	y--;
	res = x * power(x, y);
	return (res);
}
