#include "main.h"
/**
 *main - prints _putchar to the standard output
 *
 *Return: 0(success)
 */
int main(void)
{
	char set[] = "_putchar\n";
	int i = 0;

	while (set[i] != '\0')
	{
		_putchar(set[i]);
		i++;
	}
	return (0);
}
