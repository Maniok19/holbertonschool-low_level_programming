#include "main.h"
/**
 * _memset - fills memory with constant byte
 * @s: area pointed
 * @b: byte to fill with
 * @n: nuber of byte to fill
 * Return: pointer to memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
