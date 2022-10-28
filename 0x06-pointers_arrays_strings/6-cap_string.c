#include "main.h"
/**
 *cap_string - capitalizes all words of a string
 *@s: string in prospect
 *Return: string s
 */
char *cap_string(char *s)
{
	int i = 0;
	int trchar[] = {32, 10, 9, 11, 59, 44, 46, 123, 125,63, 33, 34, 40, 41};

	while (s[i] != '\0')
	{
		if (s[i] == trchar || i == 0)
		{
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
				s[i + 1] = s[i + 1] - 32;
		}
		i++;
	}
	return (s);
}
