#include "main.h"
/**
 *leet - encodes string into 1337
 *@s: string in prospect
 *Return: string s
 */
char *leet(char *s)
{
	int i = 0;
	int j;
	char lowercase[] = {'a', 'e', 'o', 't', 'l'};
	char uppercase[] = {'A', 'E', 'O', 'T', 'L'};
	char number[] = {'4', '3', '0', '7', '1'};

	while (s[i] != '\0')
	{
		j = 0;
		while (j < 5)
		{
			if (s[i] == lowercase[j] || s[i] == uppercase[j])
			{
				s[i] = number[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
