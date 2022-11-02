#include "main.h"
/**
 *_puts_recursion - prints string followed by a new line
 *@s: the string in prospect
 *Return: void
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (*(s + i) != '\0')
	{
		_putchar(*(s + i));
		i++;
		s += i;
		_puts_recursion(s);
	}
	else
		_putchar('\n');
}
