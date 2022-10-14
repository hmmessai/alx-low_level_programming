#include<stdio.h>
/**
 *main - prints alphabet in the lowercase
 *
 *Return: 0(success)
 */
int main(void)
{
	int c = 97;

	while (c <= 122)
	{
		putchar(c);
		c++;
	}
	putchar(10);
	return (0);
}
