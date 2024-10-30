#include "main.h"
/**
 * puts_half - print half of a string
 * @str: string to cut
 */
void puts_half(char *str)
{
	int num = 0;
	int len = 0;
	int half = 0;

	/* find length */
	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		half = len / 2;
	}
	else
	{
		half = (len + 1) / 2;
	}
	/* print the half*/
	for (num = half; str[num] != '\0'; num++)
	{
		_putchar(str[num]);
	}
	_putchar('\n');
}
