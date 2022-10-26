#include "main.h"
/**
 *string_toupper - changes all lowercase letters to uppercase
 *@s: string in prospect
 *Return: string s
 */
char *string_toupper(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		if (s[count] >= 97 && s[count] <= 122)
			s[count] = (s[count] - 32);
		else
			s[count] = s[count];
		count++;
	}
	return (s);
}
