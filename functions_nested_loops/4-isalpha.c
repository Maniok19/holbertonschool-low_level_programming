#include "main.h"
/**
 * _isalpha - check if char is alphabetic
 * @c: the character to check
 * Return: 1 is a letter
 * 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}