#include "main.h"
/**
 *str_concat - concatenates two strings
 *@s1: the first string
 *@s2: the second string
 *Return: new string pointer with the concatenated text
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int count1 = 0;
	unsigned int count2 = 0;
	unsigned int i = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
	{
		count1++;
		i++;
	}
	i = 0;
	while (s2[i])
	{
		count2++;
		i++;
	}
	i = 0;
	s = malloc((count1 + count2 + 1) * sizeof(char));
	if (s == NULL)
		fprintf(stderr, "Error in memory allocation");
	while (i < count1)
	{
		s[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < count2)
	{
		s[count1 + i] = s2[i];
		i++;
	}
	return (s);
}
