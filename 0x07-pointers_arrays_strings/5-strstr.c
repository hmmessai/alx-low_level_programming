#include "main.h"
/**
 *_strstr - finds the firsr occurence of substring in a given string
 *@haystack: the string in prospect
 *@needle: the substring to be found
 *Return: pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int count = 0;
	unsigned int i = 0, j = 0, k;

	while (needle[count])
		count++;

	for (k = 0; k < count; k++)
		char buffer[k] = ' ';
	while (haystack[i])
	{
		if (j == count)
			j = 0;
       		buffer[j] = haystack[i];
		if (buffer == needle)
			break;
		i++;
		j++;
	}
	return (haystack + i);
}
