#include "main.h"
/**
 *_strstr - finds the firsr occurence of substring in a given string
 *@haystack: the string in prospect
 *@needle: the substring to be found
 *Return: pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0;

	while (*haystack)
	{
		if (haystack[i] == needle[i])
		{
			while (haystack[i] == needle[i])
			{
				if (needle[i + 1] != '\0')
					return (haystack);
				i++;
			}
		}
		haystack++;
	}
	return (NULL);
}
