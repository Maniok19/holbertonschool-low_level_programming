#include "main.h"
#include <stdio.h>
/**
 * _strncpy - copies a string
 * @dest: destination
 * @src: source
 * @n: number to copy
 * Return: destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int num = 0;

	while (num < n && src[num] != '\0')
	{
		dest[num] = src[num];
		num++;
	}
	while (num < n)
	{
	dest[num] = '\0';
	num++;
	}
	return (dest);
}
