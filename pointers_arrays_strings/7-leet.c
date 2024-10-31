#include "main.h"
#include <stdio.h>
/**
 * leet - encode in 1337
 * @str: string to convert
 * Return: destination
 */
char *leet(char *str)
{
	char *tmp = str;
	int i = 0;

	while (tmp[i] != '\0')
	{
		if (tmp[i] == 'a' || tmp[i] == 'A')
		{
			tmp[i] = '4';
		}
		if (tmp[i] == 'e' || tmp[i] == 'E')
		{
			tmp[i] = '3';
		}
		if (tmp[i] == 'o' || tmp[i] == 'O')
		{
			tmp[i] = '0';
		}
		if (tmp[i] == 't' || tmp[i] == 'T')
		{
			tmp[i] = '7';
		}
		if (tmp[i] == 'l' || tmp[i] == 'L')
		{
			tmp[i] = '1';
		}
		i++;
	}
	return (str);
}
