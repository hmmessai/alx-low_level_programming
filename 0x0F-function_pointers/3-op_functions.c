#include "3-calc.h"

/**
 * op_add - sums two numbers
 * @a: first number 
 * @b: second number
 * Return: the sum of the two numbers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract one number from the other
 * @a: the first number
 * @b: the second number
 * Return: the difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two numbers
 * @a: first number
 * @b: second number
 * Return: the product of the two numbers
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide a to b
 * @a: the first number
 * @b: the second number
 * Return: the result of the division of a by b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - modulus of a by b
 * @a: first number
 * @b: second number
 * Return: the remainder of the division of a by b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
