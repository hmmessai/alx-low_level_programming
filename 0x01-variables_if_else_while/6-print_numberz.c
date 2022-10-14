#include<stdio.h>
/**
 *main - print single digit numbers using without using char type
 *
 *Return: 0(success)
 */
int main(void)
{
	unsigned int c;

	for (c = 48; c <= 57; c++)
		putchar(c);
	putchar(10);
	return (0);
}
