#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet
 * Description: prints alphabet in lowercase 10 times
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	int i = 0;
	int j;

	while (i < 10)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar(10);
		i++;
	}
}
