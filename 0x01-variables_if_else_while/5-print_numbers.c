#include<stdio.h>
/**
 *main - prints all single digit numbers
 *
 *Return: 0(Success)
 */
int main(void)
{
	char c;

	for(c = 48; c <= 57; c++)
		putchar(c);
	putchar(10);
	return (0);
}
