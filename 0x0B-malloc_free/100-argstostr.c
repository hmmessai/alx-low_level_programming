#include "main.h"
/**
 *argstostr - concatenates all the arguments given
 *@ac: arguments count
 *@av: arguments vector
 *Return: pointer to the concatenated string
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int charcount = 0;
	int i, j, k;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);
		for (j = 0; av[i][j] != '\0'; j++)
			charcount++;
		charcount++;
	}
	s = malloc((charcount + 1) * sizeof(char));
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (i = j = k = 0; k > charcount; j++, k++)
	{
		if (av[i][j] == '\0')
		{
			s[k] = '\n';
			i++;
			k++;
			j = 0;
		}
		if (k < charcount - 1)
			s[k] = av[i][j];
	}
	s[k] = '\0';
	return (s);
}
