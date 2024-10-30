#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copy the string
 * @dest: destination
 * @src: source
 * Return: destination value
 */
char *_strcpy(char *dest, char *src)
{
	int num = 0;

	while (src[num] != '\0')
	{
		dest[num] = src[num];
		num++;
	}
	dest[num] = '\0';
	return (dest);
}
