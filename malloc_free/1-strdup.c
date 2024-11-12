#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - copy the string in new pointer
 * @str: string to copy
 * Return: pointer to duplicated or NULL
 */
char *_strdup(char *str)
{
	char *st;
	unsigned int i = 0;
	unsigned int length = 0;

	if (str == NULL)
		return (NULL);

/* Find str length*/
	while (str[length] != '\0')
	{
		length++;
	}
/* create space*/
	st = malloc((length + 1) * sizeof(char));
	if (st == NULL)
		return (NULL);
/* copy string*/
	for (; i < length; i++)
	{
		st[i] = str[i];
	}
/* Add null terminator */
	st[length] = '\0';
	return (st);
}
