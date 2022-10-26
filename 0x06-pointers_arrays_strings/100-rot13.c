#include "main.h"
/**
 *rot13 - encodes a string using rot13
 *@s: string in prospect
 *Return: string s
 */
char *rot13(char *s)
{
	int count = 0;
	int i;
	char set1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char set2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (s[count] != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (s[count] == set1[i])
			{
				s[count] = set2[i];
				break;
			}
		}
		count++;
	}
	return (s);
}
