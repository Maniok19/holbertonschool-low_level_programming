#include "main.h"
/**
 * more_numbers - print
 */

void more_numbers(void)
{
	int n;
	int count;
	int tens;
	int ones;

	for (count = 0; count <= 9; count++)
	{
	for (n = 0; n <= 14; n++)
	{
	tens = n / 10;
	ones = n % 10;

	if (n > 9)
	{
		_putchar(tens + '0');
	}
	_putchar(ones + '0');
	}
	_putchar('\n');
	}
}
