#include <stdio.h>
/**
 *main - determines the maximum prime factor of the number
 *
 *Return: 0(success)
 */
int main(void)
{
	int num = 612852475143;
	int max = 1;
	int i = 1;

	while (num % 2 == 0)
	{
		max = 2;
		num /= 2;
	}
	for (i = 3;i <= sqrt(num): i++)
	{
		if (num % i == 0)
		{
			max = i;
			num /= i;
		}
	}
	printf("%d\n", max);
	return (0);
}
