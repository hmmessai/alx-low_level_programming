#include "main.h"
/**
 *main - the number of cents to give back for a given amount of cent
 *@argc: the argument count
 *@argv: the amount of cent to be given as change
 */
int main(int argc, char *argv[])
{
	int change, count;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	change = atoi(argv[1]);
	if (change < 0)
	{
		printf("0\n");
		return (0);
	}
	count = change / 25;
	change %= 25;
	count += (change / 10);
	change %= 10;
	count += (change / 5);
	change %= 5;
	count += (change / 2);
	change %= 2;
	count += change;
	printf("%d\n", count);
	return (0);
}
