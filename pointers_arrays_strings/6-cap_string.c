#include "main.h"
#include <stdio.h>
/**
 * cap_string - capitalize all words
 * @str: source string
 * Return: destination
 */
char *cap_string(char *str)
{
	int i = 0;
	int capitalize_next = 1;
	char *delimiters = " \t\n,;.!?\"(){}";

	while (str[i] != '\0')
	{
		if (capitalize_next && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
			capitalize_next = 0;
		}
		else
		{
			int j = 0;

			while (delimiters[j] != '\0')
			{
				if (str[i] == delimiters[j])
				{
					capitalize_next = 1;
					break;
				}
				j++;
			}
			if (delimiters[j] == '\0')
			{
				capitalize_next = 0;
			}
		}
		i++;
	}

	return (str);
}
