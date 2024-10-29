#include "main.h"
/**
 * print_rev - print reversed
 * @s: string to rev
 */

void print_rev(char *s)
{
	int len = 0;
	int i;

	/* Calculate the length */
	while (s[len] != '\0')
	{
		len++;
	}
	/* Print the string */
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
