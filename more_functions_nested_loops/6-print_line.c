#include "main.h"
/**
 * print_line - print love
 * @n: number of lines
 */
void print_line(int n)
{
	int count;

	for (count = 0; count < n; count++)
	{
		if (n != 0)
		_putchar('_');
	}
	_putchar('\n');
}
