#include "main.h"
/**
 * _strspn - get the length of a prefix substring
 * @s: source string
 * @accept: string to compar with
 * Return: nuber of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0;
	char *tmp;

	while (*s)
	{
		tmp = accept;
		while (*tmp)
		{
			if (*tmp == *s)
			{
				count++;
				break;
			}
			tmp++;
		}
		if (*tmp == '\0')
		{
			break;
		}
		s++;
	}
	return (count);
}
