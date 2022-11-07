#include "main.h"
/**
 *create_array - creates array of chars and initializes it
 *@size: the size of the array
 *@c: the character to the array
 *Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	s = malloc(sizeof(char) * size);
	if (s == NULL)
	{
		fprintf(strerr,"Error in memory allocation\n");
		return (1);
	}
	if (size == 0)
		return ('\0');
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return s;
}
