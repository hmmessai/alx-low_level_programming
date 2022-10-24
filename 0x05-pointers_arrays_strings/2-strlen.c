#include "main.h"
/**
 *_strlen - computes length of string
 *@s: string to be evaluated
 *Return: length of string
 */
int _strlen(char *s)
{
	int len = 0;
	int i;

	while (*s[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}
