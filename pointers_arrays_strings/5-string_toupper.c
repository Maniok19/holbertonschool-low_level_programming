#include "main.h"
#include <stdio.h>
/**
 * string_toupper - change lower to upper
 * @str: string to change
 * Return: destination
 */
char *string_toupper(char *str)
{
	char *c = str;

	while (*c != '\0')
	{
		if (*c >= 'a' && *c <= 'z')
		{
			*c = *c - 32;
		}
		c++;
	}
	return (str);
}
