#include "main.h"
/**
 *_strcat - concatenates two strings
 *@dest: the base string
 *@src: the string to be concatenated to dest
 *Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int count = 0;
	int i;

	while (dest[count] != '\0')
		count++;
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[count] = src[i];
		count++;
	}
	return (dest);
}
