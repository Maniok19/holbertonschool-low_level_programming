#include "main.h"
/**
 * print_diagonal - love
 * @n: peace
 */
void print_diagonal(int n)
{
	int count;
	int count2;

	if (n != 0)

	_putchar('\n');
	for (count = 0; count < n; count++)
	{
		for (count2 = 0; count2 < count; count2++)
		{
		_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
