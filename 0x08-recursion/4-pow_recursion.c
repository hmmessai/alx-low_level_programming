#include "main.h"
/**
 *_pow_recursion - computes the value of x raised to y
 *@x: the number to be multiplied y times
 *@y: the number of times x will be multiplied
 *Return: the value of x raised to y
 */
int _pow_recursion(int x, int y)
{
	int res;

	if (y < 0)
		return (-1);
	if (y == 0)
	{
		return (1);
	}
	y--;
       	res = x * _pow_recursion(x, y);
	return (res);
}
