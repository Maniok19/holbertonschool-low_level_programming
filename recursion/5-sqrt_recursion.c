#include "main.h"
/**
 * guessr - guess square root
 * @n: nuber source
 * @i: guess index
 * Return: result or -1
 */
int guessr(int n, int i)
{
	if (n < 0)
	{
		return (-1);
	}
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (guessr(n, i + 1));
}
/**
 * _sqrt_recursion - return the root
 * @n: number source
 * Return: result
 *
 */
int _sqrt_recursion(int n)
{
return (guessr(n, 0));
}
