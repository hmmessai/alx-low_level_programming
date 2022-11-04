#include "main.h"
/**
 *_strncat - concatenates two strings
 *@dest: base string
 *@src: the string to be concatenated to the base
 *@n: the bytes that will be used from src
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int count = 0;
	int i;

	while (dest[count] != '\0')
		count++;
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[count] = src[i];
		count++;
	}
	return (dest);
}
