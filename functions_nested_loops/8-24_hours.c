#include "main.h"
/**
 * jack_bauer - print 24h
 *
 * Return: Always 0
 *
 */

void jack_bauer(void)
{
	int h;
	int m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
		if (h < 10)
		{
			_putchar('0');
			_putchar('0' + h);
		}
		else
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
		}
		_putchar(':');
		if (m < 10)
		{
			_putchar('0');
			_putchar('0' + m);
		}
		else
		{
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
		}
		_putchar('\n');
		}
	}
}
