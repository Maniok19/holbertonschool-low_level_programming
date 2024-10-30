#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatenate two strings
 * @dest: destination
 * @src: source
 * Return: destination
 */
char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*p != '\0')
		{
		p++;
		}

	while (*src != '\0')
	{
		*p = *src;
		p++;
		src++;
	}
	*p = '\0';

	return (dest);
}
