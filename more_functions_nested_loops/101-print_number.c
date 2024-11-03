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
		if (n == -2147483648)
		{
		_putchar('-');
		_putchar('2');
		_putchar('1');
		_putchar('4');
		_putchar('7');
		_putchar('4');
		_putchar('8');
		_putchar('3');
		_putchar('6');
		_putchar('4');
		_putchar('8');
		}
		else
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
