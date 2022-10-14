#include<stdio.h>
/**
 *main - print every two possible combination of the single digits
 *
 *Return: 0(success)
 */
int main(void)
{
	unsigned int c;
	unsigned int d;
	for (c = 48; c <= 57; c++)
	{
		for(d = c + 1; d < 57; d++)
		{
			putchar(c);
			putchar(d);
		       	putchar(44);
		       	putchar(32);
	       	}
	}
	putchar(10);
	return (0);
}
