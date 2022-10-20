#include "main.h"
/**
 *print_diagonal - print diagonal line with the specified number
 *@n: number of times diagonal line should be printed
 *Return: void
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('\\');
			_putchar('\n');
			if (i != n)
			{
				for (j = 1; j <= i; j++)
					_putchar(' ');
			}
		}
	}
	else
		_putchar('\n');
}
