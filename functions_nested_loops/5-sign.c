#include "main.h"
/**
 * print_sign - print sign
 * @n: the character to check
 * Return: 0 for 0, 1 for positive, -1 for negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
