#include "main.h"
/**
 *square_finder - computes the square of root given number if perfect square
 *@num: the number to be calculated
 *@root: the starting number of the root
 *Return: root or -1(if not perfect square)
 */
int square_finder(int num, int root)
{
	if (root == num / 2)
		return (-1);
	if (root * root == num)
		return (root);
	return (square_finder(num, root + 1));
}

/**
 *_sqrt_recursion - returns the natural square root of a number
 *@n: the number in prospect
 *Return: square root or -1(if it doesnt have one)
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (square_finder(n, 2));
}
