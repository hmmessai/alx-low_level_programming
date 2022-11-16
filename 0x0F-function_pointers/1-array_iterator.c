#include "function_pointers.h"
/**
 *array_iterator - execute a function given as a parameter on each element of the array
 *@array: the array in prospect 
 *@size: the size of the array
 *@action: the pointer to the function you need to use
 *Return: void 
 */

void array_iterator(int *array, size_t size,void (*action)(int))
{
  unsigned int i;

  if (array && action)
    {
      for (i =  0; i < size; i++)
	action(array[i]);
    }
}
