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

	if(n < 15 && n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if(j == 0)
				{
					_putchar(48);
					_putchar(44);
				}
				else if (j != n)
				{
					if (i * j > 100)
					{
						_putchar(32);
						_putchar(((i * j) / 100) + 48);
						_putchar((((i * j) / 10) % 10) + 48);
						_putchar(((i * j) % 10) + 48);
						_putchar(44);
					}
					else if (i * j >= 10)
					{
						_putchar(32);
						_putchar(32);
						_putchar(((i * j) / 10) + 48);
						_putchar(((i * j) % 10) + 48);
						_putchar(44);
					}
					else
					{
						_putchar(32);
						_putchar(32);
						_putchar(32);
						_putchar((i * j) + 48);
						_putchar(44);
					}
				}
				else
				{
					if (i * j > 100)
					{
						_putchar(32);
						_putchar(((i * j) / 100) + 48);
						_putchar((((i * j) / 10) % 10) + 48);
						_putchar(((i * j) % 10) + 48);
					}
					else if (i * j > 10)
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
				}
			}
			_putchar(10);
		}
	}
}
