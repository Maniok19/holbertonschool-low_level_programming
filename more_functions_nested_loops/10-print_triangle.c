#include "main.h"
/**
 * print_triangle - print triangle
 * @size: size
 */
void print_triangle(int size)
{
	int row;
	int col;
	int space;

	if (size > 0)
	{
		for (row = 1; row <= size; row++)
		{
			for (space = size - row; space > 0; space--)
			{
				_putchar(' ');
			}
			for (col = 1; col <= row; col++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
