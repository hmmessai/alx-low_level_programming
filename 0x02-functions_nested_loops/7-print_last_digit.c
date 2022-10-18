#include "main.h"
/**
 *print_last_digit - prints last digit of the specified number
 *
 *@n: the number to be evaluated to get its last digit
 *
 *Return: 0(success)
 */
int print_last_digit(int n)
{
	int lstdgt = n % 10;

	_putchar(lstdgt + 48);
	return (0);
}
