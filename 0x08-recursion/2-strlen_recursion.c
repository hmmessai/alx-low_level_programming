#include "main.h"
/**
 *_strlen_recursion - finds the length of a string
 *@s: the string in prospect
 *Return: length of string
 */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s)
	{
		count++;
		s += 1;
		count += _strlen_recursion(s);
	}
	return (count);
}
