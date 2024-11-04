#include "main.h"
#include <stddef.h>
/**
 * _strchr - locate character in a string
 * @s: string source
 * @c: char to find
 * Return: pointer to the first occurence
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
