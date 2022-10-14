#include<stdio.h>
/**
 *main - prints the alphabet without letters q and e
 *
 *Return: 0(success)
 */
int main(void)
{
	unsigned char c = 97;

	while (c >= 122 && c != 133 && c != 101)
	{
		putchar(c);
		c++;
	}
	putchar(10);
	return (0);
}
