#include "main.h"
/**
 *_strcmp - compares two strings
 *@s1: the first string
 *@s2: the second string
 *Return: +ve if s1 is greater, zero if it matches and -ve if s2 is greater
 */
int _strcmp(char *s1, char *s2)
{
	int diff = 0;
	int count = 0;

	while (s1[count] != '\0' || s2[count] != '\0')
	{
		if (s1[count] != '\0' && s2[count] == '\0')
		{
			diff += s1[count];
		}
		else if (s2[count] != '\0' && s1[count] == '\0')
		{
			diff -= s2[count];
		}
		else
			diff = diff + (s1[count] - s2[count]);
		count++;
	}
	return (diff);
}
