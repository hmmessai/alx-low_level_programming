#include "main.h"
/**
 *_islower - idetifies lowercase letters
 *
 *Return: 0(if its lowercase) 1(otherwise)
 */
int _islower(int c)
{
	if (c <= 122 && c >= 97)
		return (1);
	else
		return (0);
}
