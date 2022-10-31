#include "main.h"
/**
 *_strspn - gets the length of a prefix substring
 *@s: string to be searched
 *@accept: the accepted bytes to be searched
 *Return: the number of bytes from s that match accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int count = 0;
	unsigned int len = 0;
	unsigned int j;

	while (accept[count] != '\0')
		count++;
	while (s[i] != ' ')
	{
		for (j = 0; j < count; j++)
		{
			if (s[i] == accept[j])
				len++;
		}
		i++;
	}
	return (len);
}
