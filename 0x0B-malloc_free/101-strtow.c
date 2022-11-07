#include "main.h"
/**
 *strtow - changes string to two words
 *@str: the string in prospect
 *Return: returns the pointer to words
 */
char **strtow(char *str)
{
	char **s;
	int i, j;

	for (i = j = 0; str[i] != '\n'; i++)
	{
       		for (j = 0; str[j] == ' '; i++, j++)
       			s[i][j] = str[i];
	}
	return (s);
}
