#include "main.h"
/**
 *_isalpha - checks if the specified character is a letter
 *
 *@c: the character checked if it is a letter
 *
 *Return: 1(if letter), 0(otherwise)
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
