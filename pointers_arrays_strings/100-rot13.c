#include "main.h"
#include <stdio.h>
/**
 * rot13 - convert to rot13
 * @str: string source
 * Return: converted string
 */
char *rot13(char *str)
{
	int i = 0;
	char *s = str;
	char *alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*s)
	{
		for (i = 0; alpha[i]; i++)
		{
			if (*s == alpha[i])
			{
				*s = rot[i];
				break;
			}
		}
		s++;
	}
	return (str);
}
