#include "main.h"
/**
 *string_nconcat - concatenates two strings
 *@s1: string 1
 *@s2: string 2
 *@n: the first bytes of s2 to be concatenated to s1
 *Return: pointer to the new string with concatenation of s1 and s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int count1 = 0, count2 = 0, i, fullen;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[count1] != '\0')
		count1++;

	while (s2[count2] != '\0')
		count2++;

	if (n > count2)
		n = count2;

	fullen = count1 + n;

	s = malloc(fullen + 1);

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < fullen; i++)
		if (i < count1)
			s[i] = s1[i];
		else
			s[i] = s2[i - count1];

	s[i] = '\0';

	return (s);
}
