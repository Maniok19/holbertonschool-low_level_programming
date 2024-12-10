#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: Number to print
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int i;

	if (n == 0)
	{
		putchar('0');
		return;
	}

	for (i = 63; i >= 0; i--)
	{
		if ((n >> i) & mask)
			break;
	}

	for (; i >= 0; i--)
	{
		if ((n >> i) & mask)
			putchar('1');
		else
			putchar('0');
	}
}