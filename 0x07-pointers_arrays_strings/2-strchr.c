#include "main.h"
/**
 *_strchr - finds a character in a given string
 *@s: the string in prospect
 *@c: the character to be found
 *Return: the pointer to the first occurence of the character
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return (NULL);
}
