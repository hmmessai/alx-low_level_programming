#include "main.h"
/**
 *print_times_table - print nxn times table
 *
 *@n: the number that the table is constructed for
 *
 *Return: nothing
 */
void print_times_table(int n)
{
	int i, j;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (j == 0)
					_putchar(48);
				else if (i * j > 99)
				{
					_putchar(32);
					_putchar(((i * j) / 100) + 48);
					_putchar((((i * j) / 10) % 10) + 48);
					_putchar(((i * j) % 10) + 48);
				}
				else if (i * j > 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(((i * j) / 10) + 48);
					_putchar(((i * j) % 10) + 48);
				}
				else
				{
					_putchar(32);
					_putchar(32);
					_putchar(32);
					_putchar((i * j) + 48);
				}
				if (j == n)
					_putchar(10);
				else
					_putchar(44);
			}
		}
	}
}
