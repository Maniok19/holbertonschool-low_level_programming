#include "main.h"

/**
 * _abs - absolute value
 * @n: the integer to check
 * Return: always abs n
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	return (n);
}
