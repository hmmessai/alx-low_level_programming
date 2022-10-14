#include<stdio.h>
/**
 *main - prints all base 16 single in lowercase
 *
 *Return: 0(success)
 */
int main(void)
{
	unsigned char c;

	for (c = 48; c <= 57; c++)
		putchar(c);
	for (c = 97; c <= 102; c++)
		putchar(c);
	putchar(10);
}
