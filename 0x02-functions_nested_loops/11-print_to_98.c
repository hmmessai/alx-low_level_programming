#include <stdio.h>
/**
 *print_to_98 - prints all natural numbers from the specified number to 98
 *
 *@n: the start of the sequence to be printed
 *
 *Return: nothing
 */
void print_to_98(int n)
{
	signed int i, j;

	if (n <= 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%d, ", i);
		}
		printf("%d\n", 98);
	}
	else
	{
		for (j = n; j > 98; j--)
		{
			printf("%d, ", j);
		}
		printf("%d\n", 98);
	}
}
