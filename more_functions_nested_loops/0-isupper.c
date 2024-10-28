#include "main.h"
/**
 * _isupper - check for uppercase
 * Return: 1 is upper or 0
 * @c: char to check
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
