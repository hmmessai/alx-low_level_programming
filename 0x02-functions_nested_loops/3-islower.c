#include "main.h"
/**
 *_islower - idetifies lowercase letters
 *
 *@c: the character checked if it is lowercase letter
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
