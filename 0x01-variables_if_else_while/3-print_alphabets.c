#include<stdio.h>
/**
 *main - prints the alphabet in lowercase and then in uppercase
 *
 *Return: 0(success)
 */
int main(void)
{
	char c = 97;

	while (c < 122)
	{
		putchar(c);
		c++;
	}
	c = 65;
	while (c < 90)
	{
		putchar(c);
		c++;
	}
	putchar(10);
	return (0);
}
