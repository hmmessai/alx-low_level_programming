#include "main.h"
/**
 *set_string - set a value of a pointer to a char
 *@s: the value of the pointer
 *@to: the char to be used
 *Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
