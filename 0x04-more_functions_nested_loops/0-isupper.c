#include "main.h"
/**
 *_isupper - checks for uppercase letter
 *
 *Return: 1(if uppercase), 0(otherwise)
 */
int _isupper(int c)
{
	if(c >=90 && c <= 65)
		return (1);
	else
		return (0);
}
