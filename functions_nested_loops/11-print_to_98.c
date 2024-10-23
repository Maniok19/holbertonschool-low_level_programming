#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starting integer
 */

void print_to_98(int n)
{
	int m;

	for (m = n; m <= 98; m++)
	{
		if (m < 10)
		{
			_putchar(m + '0');
			_putchar(',');
			_putchar(' ');
		}
		else if (m == 98)
		{
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
		}
		else
		{
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}

	}
}
