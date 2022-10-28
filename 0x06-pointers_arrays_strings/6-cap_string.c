#include "main.h"
/**
 *cap_string - capitalizes all words of a string
 *@s: string in prospect
 *Return: string s
 */
char *cap_string(char *s)
{
	int i = 0, j;
	char tchar[] = {'\n', '\t', ',', ';', '.', '!', '?', '"', '(', ')', '{',
			'}', ' '};

	while (s[i] != '\0')
	{
		for (j = 0; j < 14; j++)
		{
			if (s[i] == tchar[j])
			{
				if (s[i + 1] >= 97 && s[i + 1] <= 122)
					s[i + 1] -= 32;
				break;
			}
		}
		i++;
	}
	return (s);
}
