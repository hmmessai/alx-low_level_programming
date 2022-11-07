#include "main.h"
/**
 *_strdup - returns a pointer to a newly allocated memory with copy of str
 *@str: the pointer of the string to be contained in the new memory
 *Return: str
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int count = 0;
	unsigned int i = 0;

	if (!str)
		return (NULL);
	while (str[i])
	{
		count ++;
		i++;
	}
	count++;
	s = malloc(count * sizeof(char));
	if (s == NULL)
		return (NULL);
	i = 0;
	while (i < count)
	{
		s[i] = str[i];
		i++;
	}
	return (s);
}
