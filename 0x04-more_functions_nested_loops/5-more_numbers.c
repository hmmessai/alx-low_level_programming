#include "main.h"
/**
 *more_numbers - prints the numbers 0-14 10 times
 *
 *Return: void
 */
void more_numbers(void)
{
	int i;
	int ones;
	int tens;
	int count;

	while (count <= 10)
	{
	for (i = 0; i <= 14; i++)
	{
		if (i < 10)
		{
			ones = i;
			tens = -48;
		}
		else
		{
			ones = i % 10;
			tens = i / 10;
		}
		_putchar(tens + '0');
		_putchar(ones + '0');
	}
	putchar(10);
	count++;
	}
}
