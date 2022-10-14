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
		putchar(44);
		putchar(32);
		c++;
	} while (c <= 57);
	putchar(10);
	return (0);
}
