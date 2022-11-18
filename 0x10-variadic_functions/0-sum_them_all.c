#include "variadic_functions.h"

/**
 *sum_them_all - sums all of its parameters
 *@n: the number of parameters passed into it
 *@...: the variable arguments to calculate the sum of 
 *Return: if n == 0 - 0
 *        otherwise - sum 
 */

int sum_them_all(const unsigned int n, ...)
{
  va_list nums;
  unsigned int i, sum = 0;

  if (n == 0)
    return (0);
  
  va_start(nums,n);

  for (i = 0; i < n; i++)
    sum  += va_arg(nums, int);

  va_end(nums);

  return (sum);
}
