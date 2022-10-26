#include "main.h"
/**
 *print_number - prints an integer
 *@n: the integer in prospect
 *Return: void
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n == 0)
		_putchar('0');
	else if (n < 10)
		_putchar((n % 10) + '0');
	else if (n < 100 && n > 10)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (n < 1000 && n > 100)
	{
		_putchar((n / 100) + '0');
		_putchar((n / 10) % 10 + '0');
		_putchar((n % 10) + '0');
	}
	else if (n < 10000 && n > 1000)
	{
		_putchar((n / 1000) + '0');
		_putchar(((n / 100) % 10) + '0');
		_putchar(((n / 10) % 10) + '0');
		_putchar((n % 10) + '0');
	}
}
