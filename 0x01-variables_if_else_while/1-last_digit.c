#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 *main - identify the last digit and compare it with 5
 *
 *Return: 0(Success)
 */
int main(void)
{
	int n;
	int lstd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lstd = n % 10;

	if (lstd > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, lstd);
	else if (lstd == 0)
		printf("Last digit of %i is %i and is 0\n", n, lstd);
	else if (lstd < 6 && lstd != 0)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, lstd);
	return (0);
}
