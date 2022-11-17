#include "variadic.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_strings - prints strings followed by a new line
 *@separator: the string to be printed between the strings
 *@n: the number of strings passed to the function
 *@...: a variable number of stirngs to be printed
 *Return: void 
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
  va_list strings;
  char *str;
  unsigned int i;

  va_string(string, n);

  for (i = 0; i < n; i++)
    {
      str = va_arg(string, char *);

      if (str == NULL)
	printf("(nil)");
      else
	printf("%s");
      if (i != (n-1) && separator != NULL)
	printf("%s", separator);
    }
  printf("\n");

  va_end(strings);
}
