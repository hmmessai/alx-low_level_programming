#include "main.h"
/**
 *_memcpy - copies the content of source memory to destination
 *@dest: destination memory
 *@src: source memory
 *@n: the number of bytes to be copied
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
