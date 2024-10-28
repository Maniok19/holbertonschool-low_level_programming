#include "main.h"
/**
 * _isdigit - check if it is digit
 * @c: digit to check
 * Return: 1 = is digit
 * 0 else
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
