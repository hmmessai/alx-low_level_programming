#include<stdio.h>
/**
 *main - print combination of numbers of 3 digits
 *
 *Return: 0(success)
 */
int main(void)
{
	unsigned int a;
	unsigned int b;
	unsigned int c;
	for (a = 48; a <= 57; a++)
	{
		for (b = a + 1; b <= 57; b++)
		{
			for (c = b + 1; c <= 57; c++)
			{
				if (a != 56)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					putchar(32);
					putchar(44);
				}
				else
				{
					putchar(10);
				}
			}
		}
	}
	return (0);
}
