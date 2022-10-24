#include "main.h"
/**
 * swap_int - swaps the values of two integers with eachother
 *@a: address of the first number of to be swaped
 *@b: address of the second number to be swaped
 *Return: void
 */
void swap_int(int *a, int *b)
{
	int num1 = *b;
	int num2 = *a;
	*a = num1;
	*b = num2;
}
