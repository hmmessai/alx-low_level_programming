#include <stdio.h>
/**
 *main - computes the sum of all multiples of 3 or 5 under 1024
 *
 *Return: nothing
 */
void main(void)
{
	int i;
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	printf("%d\n",sum);
}
