#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10x
 * void print_alphabet - print alphabet 1x
 * Return: Always 0
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
}

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
	print_alphabet();
	}
}
