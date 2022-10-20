#include "main.h"
/**
 *print_line - print a line with the specified number
 *@n: number of characters for the line
 *Return: void
 */
void print_line(int n)
{
	int i;


	if (n > 0)
	{
		for (i = 1; i == n; i++)
		{
			_putchar('_');
		}
	}
	_putchar(10);
}
