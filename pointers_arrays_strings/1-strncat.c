#include "main.h"
#include <stdio.h>
/**
 * _strncat - concatenate two strings
 * @dest: destination
 * @src: source
 * @n: number of byte from src
 * Return: Destination
 */
char *_strncat(char *dest, char *src, int n)
{
		char *p = dest;

	while (*p != '\0')
		{
		p++;
		}

	while (n > 0 && *src != '\0')
	{
		*p = *src;
		p++;
		src++;
		n--;
	}
	*p = '\0';

	return (dest);
}
