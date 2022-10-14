#include<stdio.h>
/**
 *main - print the lowercase alphabet in reverse order
 *
 *Return: 0(Success)
 */
int main(void)
{
	unsigned char c;

	for (c = 122; c >= 97; c--)
		putchar(c);
	putchar(10);
	return (0);
}
