#include "main.h"
/**
 *_print_rev_recursion - prints string in reverse
 *@s: the string in prospect
 *Return: void
 */
void _print_rev_recursion(char *s)
{
	int i = 0;

	if (*(s + i) != '\0')
	{
		i++;
	}
	if (*(s + i) == '\0')
	{
		i--;
		s += i;
		_print_rev_recursion(s);
	}
}
