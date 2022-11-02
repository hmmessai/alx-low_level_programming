#include "main.h"
/**
 *factorial - computes the factorial of a number
 *@n: the number in prospect
 *Return: the factorial of the number
 */
int factorial(int n)
{
	int res;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	res = n * factorial(n - 1);
	return (res);
}
