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
		putchar(c, stdout);
		c++;
	}
	putchar(10);
}
