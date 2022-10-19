#include "main.h"
/**
 *print_last_digit - prints last digit of the specified number
 *
 *@n: the number to be evaluated to get its last digit
 *
 *Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	if(n >= 0)
	{
		_putchar(last_digit + 48);
		return (last_digit);
	}
	else
	{
		_putchar(-last_digit + 48);
		return (-last_digit);
	}
}
