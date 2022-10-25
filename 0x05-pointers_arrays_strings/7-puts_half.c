#include "main.h"
/**
 *puts_half - prints half of the given string
 *@str: the string in prospect
 *Return: void
 */
void puts_half(char *str)
{
	int count = 0;
	int i, start;

	while (str[count] != '\0')
		count++;
	count--;
	if (count % 2 == 0)
		start = count / 2;
	else
		start = (count - 1) / 2;
	for (i = start + 1; i <= count; i++)
		_putchar(*(str + i));
	_putchar('\n');
}
