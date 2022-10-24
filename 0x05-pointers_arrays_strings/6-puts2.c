#include "main.h"
/**
 *puts2 - prints every other character of a given string
 *@str: the string in prospect
 *Return: void
 */
void puts2(char *str)
{
	int count = 0;

	while (str[count] != '\0')
		count++;
	for(i = 0; i < count; i+=2)
		_putchar(str[i]);
	_putchar('\n');
}
