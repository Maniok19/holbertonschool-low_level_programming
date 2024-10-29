#include "main.h"
/**
 * _puts - print a string
 * @str: string to print
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
}
