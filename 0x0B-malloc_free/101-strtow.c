#include "main.h"
/**
 *strtow - changes string to two words
 *@str: the string in prospect
 *Return: returns the pointer to words
 */

int strtow(char *str);

int strtow(char *str)
{
	char **s;
	int i = 0, __attribute__((unused)) j;
	int wordCount = 1;
	int len = 0;

	while (str[i])
	{
		if (str[i] == ' ')
		{
			if(str[i + 1] != ' ' && str[i + 1] != '\0')
				wordCount++;
		}
		else
			len++;
		i++;
	}

	s = malloc(sizeof(char) * (len + wordCount));

	if (s == NULL)
		return (0);

	if (str = NULL || str == "")
		return (0);

	for (i = 0; i < wordCount; i++)
	{
       		for (j = 0; str[j] == ' '; i++, j++)
       			s[i][j] = str[i];
	}

	s[i] = NULL;

	return (len);
}

int main(void)
{

  printf("%d", strtow("      ALX School         #cisfun      "));
	return (0);
}
