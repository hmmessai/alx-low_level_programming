#include<stdio.h>
/**
 *main - prints comma separated single digit numbers
 *
 *Return: 0(success)
 */
int main(void)
{
	unsigned int c = 48;

	do {
		if (c != 56)
		{
			putchar(c);
			putchar(44);
			c++;
		}
		else
		{
			putchar(c);
			c++;
		}
		putchar(32);
	} while (c <= 56);
	return (0);
}
