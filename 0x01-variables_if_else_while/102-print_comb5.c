#include<stdio.h>
/**
 *main - print all the possible pairs of two digit numbers
 *
 *Return: 0 (success)
 */
int main(void)
{
	unsigned int a;
	unsigned int b;
	unsigned int c;
	unsigned int d;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			putchar(a);
			putchar(b);
			putchar(32);
			for (c = 48; c <= 57; c++)
			{
				for (d = 48; d <= 57; d++)
				{
					putchar(c);
					putchar(d);
					putchar(44);
					putchar(10);
				}
			}
		}
	}
	return (0);
}
