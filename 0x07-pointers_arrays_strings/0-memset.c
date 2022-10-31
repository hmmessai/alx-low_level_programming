#include "main.h"
/**
 *memset - fills memory with a constant byte
 *@s: address of the memory to fill
 *@b: the constant byte to fill the memory
 *@n: the number of bytes to fill
 *Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return s;
}
