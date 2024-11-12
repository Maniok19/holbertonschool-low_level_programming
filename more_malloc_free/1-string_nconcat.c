#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concat s1 + n char of s2
 * @s1: first string
 * @s2: secont string
 * @n: number of char to conc
 * Return: pointer to conc str
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sdest;
	unsigned int i, j;
	unsigned int l1 = 0;
	unsigned int l2 = 0;

	/* Check for NULL inputs */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

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
	sdest = malloc((l1 + n + 1) * sizeof(char));
	if (sdest == NULL)
		return (NULL);
	/* Fill space with strings*/
	for (i = 0; i < l1; i++)
	{
		sdest[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		sdest[i + j] = s2[j];
	}
	sdest[i + j] = '\0';
	return (sdest);
}
