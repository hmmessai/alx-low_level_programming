#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: the pointer to the struct dog
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: ");
		if (d ->name == NULL)
			printf("(nil)\n");
		printf("%s\n", d ->name);
		printf("Age: ");
		if (d -> age < NULL)
			printf("(nil)\n");
		printf("%.6f\n", d -> age);
		printf("Owner: ");
		if (d -> owner == NULL)
			printf("(nil)\n");
		printf("%s\n", d -> owner);
	}
	return;
}

