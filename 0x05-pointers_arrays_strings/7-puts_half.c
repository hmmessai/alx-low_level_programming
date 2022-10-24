#include "main.h"
/**
 *puts_half - prints half of the given string
 *@str: the string in prospect
 *Return: void
 */
void puts_half(char *str)
{
	int count = 0;
	int i;

	while (str[count] != '\0')
		count++;
	count--;
	if (count % 2 == 0)
		count /= 2;
	else
		count = (count - 1) / 2;
	for (i = 0; i <= count; i++)
		_putchar(*(str + i));
	_putchar('\n');
}
