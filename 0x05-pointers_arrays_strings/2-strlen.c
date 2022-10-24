#include "main.h"
/**
 *_strlen - computes length of string
 *@s: string to be evaluated
 *Return: length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + 1) != '\0')
		len++;
	return (len);
}
