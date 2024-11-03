#include "main.h"
/**
 * print_number - print int
 * @n: int to print
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		if (n == -2147483647)
		{
			_putchar('2');
			n = -(n % 1000000000);
		} else
		{
			n = -n;
		}
	}

	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}
