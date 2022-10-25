#include "main.h"
/**
 *rev_string - reverses a string
 *@s: string to be reveersed
 *Return: void
 */
void rev_string(char *s)
{
	int count = 0;
	int i = 0;

	while (*(s + count) != '\0')
		count++;
	count--;
	while (count >= 0)
       	{
       		s[i] = s[count];
       		count--;
		i++;
       	}
}
