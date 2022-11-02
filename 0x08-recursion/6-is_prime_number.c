#include "main.h"
/**
 *isDivisible - checks if the number is divisible with every possible number
 *@num: the number in prospect
 *@div: the dividend
 *Return: 1 if prime 0 if not
 */
int isDivisible(int num, int div)
{
	if (num % div == 0)
		return (0);
	if (div == num / 2)
		return (1);
	return isDivisible(num, div + 1);
}

/**
 *is_prime_number - checks whether integer is prime or not
 *@n: the integer in prospect
 *Return: 1 if prime 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	if (n == 3)
		return (1);
	return (isDivisible(n, 4));
}
