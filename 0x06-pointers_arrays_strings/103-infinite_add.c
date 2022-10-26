#include "main.h"
/**
 *infinite_add - adds two numbers
 *@n1: number 1
 *@n2: number 2
 *@r: the buffer to store the sum
 *@size_r: the buffer size
 *Return: pointer to sum
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int count1 = 0;
	int count2 = 0;
	int i, j, k, result;
	int num1 = 0;
	int num2 = 0;
	int x, y;

	while (n1[count1] != '\0')
		count1++;
	while (n2[count2] != '\0')
		count2++;
	for (i = 0; i < count1; i++)
	{
		x = n1[i] - 48;
		num1 += x * 10 * * i;
	}
	for (j = 0; j < count2; j++)
	{
		y = n2[j] - 48;
		num2 += y * 10 * * j;
	}
	if (size_r > count1 + 1 || size_r > count2 + 1)
	{
		result = num1 + num2;
		for (k = size_r; k >= 0; k--)
		{
			r[k] = result % 10;
			result /= 10;
		}
		return (r);
	}
	else
	{
		return (0);
	}
}
