#include "function_pointers.h"

/**
 *int_index - searches for an integer
 *@array: the arrray that will be searched
 *@size: the number of elements in the array
 *@cmp: the pointer of the function to be used to compare the value of the numbers
 *Return: (index of first element) - with non zero response from cmp
 *        (-1) - if no matches and size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
