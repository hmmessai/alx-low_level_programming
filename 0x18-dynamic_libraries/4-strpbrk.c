#include "main.h"
/**
 *_strpbrk - searches a string for the first occurence of any of a set of bytes
 *@s: the string in prospect
 *@accept: the bytes to be searched for
 *Return: pointer to the byte in s that matches accept
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j;

	while (*(s + i) != '\0')
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
		i++;
	}
	return (NULL);
}
