#include "main.h"
/**
 *_strcpy - copy string from the specified source to destination
 *@src: the source to be copied from
 *@dest: the destination to be copied to
 *Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;
	int i;

	while (*src != '\0')
		count++;
	for (i = 0; i <= count; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
