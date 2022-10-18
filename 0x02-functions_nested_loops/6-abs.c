#include "main.h"
/**
 *_abs - identifies the absolute value of the specified number
 *
 *@n: the number evaluated for absolute value
 *
 *Return: absolute value of the specified number
 */
int _abs(int n);
{
	if (n > 0)
		return (n);
	else if (n == 0)
		return (0);
	else
		return (-n);
}
