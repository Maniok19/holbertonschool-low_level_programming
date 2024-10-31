#include "main.h"
#include <stdio.h>
/**
 * _strcmp - Compare two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: Difference between the first differing characters, or 0 if equal
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s2++;
		s1++;
	}
	return (*s1 - *s2);
}
