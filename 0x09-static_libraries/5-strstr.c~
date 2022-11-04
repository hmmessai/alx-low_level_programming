#include "main.h"
/**
 *_strstr - finds the firsr occurence of substring in a given string
 *@haystack: the string in prospect
 *@needle: the substring to be found
 *Return: pointer to string at the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i;

	if (*needle == '\0')
		return (haystack);
	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return (NULL);
}
