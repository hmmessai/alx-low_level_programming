#include "main.h"
/**
 *print_most_numbers - prints all single digits except 2 and 4
 *
 *Return: void
 */
void print_most_numbers(void)
{
	for (i = 48; i <= 57; i++)
	{
		if (i == 50 || i == 52)
			continue;
		_putchar(i);
	}
	_putchar(10);
}
