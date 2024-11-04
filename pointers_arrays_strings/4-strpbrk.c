#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - search a string in a set of bytes
 * @s: source string
 * @accept: string to search
 * Return: pointer to the byte in s, or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	char *tmp;

	while (*s)
	{
		tmp = accept;
		while (*tmp)
		{
			if (*tmp == *s)
			{
				return (s);
			}
			tmp++;
		}
		s++;
	}
	return (NULL);
}
