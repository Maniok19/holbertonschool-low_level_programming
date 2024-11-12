#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to new string
 */
char *str_concat(char *s1, char *s2)
{
	char *sdest;
	unsigned int l1 = 0;
	unsigned int l2 = 0;
	unsigned int i = 0;
	unsigned int j = 0;

/* Find str length*/
	while (s1[l1])
	{
		l1++;
	}
	while (s2[l2])
	{
		l2++;
	}
/* Allocate space */
	sdest = malloc((l1 + l2 + 1) * sizeof(char));
	if (sdest == NULL)
		return (NULL);

/* Fill space with strings*/
	for (i = 0; i < l1; i++)
	{
		sdest[i] = s1[i];
	}
	for (j = 0; j < l2; j++)
	{
		sdest[i + j] = s2[j];
	}
	sdest[i + j] = '\0';
	return (sdest);
}
