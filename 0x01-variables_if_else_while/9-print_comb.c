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
		putchar(c);
		if (c != 57)
		{
			putchar(44);
			putchar(32);
			c++;
		}
		else
		{
			putchar(10);
			c++;
		}
	} while (c <= 57);
	return (0);
}
