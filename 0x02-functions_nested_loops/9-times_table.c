#include "main.h"
/**
 *times_table - print 9x9 times table
 *
 *Return: nothing
 */
void times_table(void)
{
	int i, j, product, last_digit, first_digit;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			product = i * j;
			if (product < 10)
			{
				if (j == 0)
				{
					_putchar(48);
				}
				else
				{
					_putchar(32);
					_putchar(32);
					_putchar(product + 48);
				}
				if (j != 9)
				{
					_putchar(44);
				}
				else
				{
					_putchar(10);
				}
			}
			else
			{
				if (j == 0)
				{
					_putchar(48);
				}
				else
				{
					_putchar(32);
					last_digit = product % 10;
					first_digit = product / 10;
					_putchar(first_digit + 48);
					_putchar(last_digit + 48);
				}
				if (j != 9)
				{
					_putchar(44);
				}
				else
				{
					_putchar(10);
				}
			}
		}
	}
}
