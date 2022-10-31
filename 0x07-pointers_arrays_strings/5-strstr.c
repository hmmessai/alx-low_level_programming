#include "main.h"
/**
 *_strstr - finds the firsr occurence of substring in a given string
 *@haystack: the string in prospect
 *@needle: the substring to be found
 *Return: pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle);
{
	unsigned int count = 0;

	while (needle[count])
		count++;

	char buffer[count];

	while (haystack[i])
	{
		if (j == count)
			j = 0;
       		buffer[j] = haystack[i];
		i++;
		j++;
	}
}
