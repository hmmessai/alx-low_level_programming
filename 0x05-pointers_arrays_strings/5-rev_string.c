#include "main.h"
/**
 *rev_string - reverses a string
 *@s: string to be reveersed
 *Return: void
 */
void rev_string(char *s)
{
	int count = 0;
	int i,strl;

	while (*(s + count) != '\0')
		count++;
	strl = --count;
	for (i = 0; i <= strl; i++)
	{
		while (count >= 0)
		{
			s[i] = s[count];
			count--;
		}
	}
}
