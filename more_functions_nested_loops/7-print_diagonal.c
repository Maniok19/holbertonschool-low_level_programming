#include "main.h"
/**
 * print_diagonal - love
 * @n: peace
 */
void print_diagonal(int n)
{
	int count;
	int count2;

	if (n > 0)
	for (count = 0; count < n; count++)
	{
		for (count2 = 0; count2 < count; count2++)
		{
		_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
int main(void)
{
    print_diagonal(0);
    print_diagonal(2);
    print_diagonal(10);
    print_diagonal(-4);
    return (0);
}