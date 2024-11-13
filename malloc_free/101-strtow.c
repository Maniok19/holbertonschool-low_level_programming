#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * count_words - Counts the number of words in a string
 * @str: The string to count words in
 *
 * Return: The number of words in the string
 *
 * Description: This function iterates through the string,
 * counting words by detecting transitions from spaces to
 * non-space characters.
 */
int count_words(char *str)
{
	int count = 0, in_word = 0;

	while (*str)
	{
		if (*str != ' ' && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*str == ' ')
		{
			in_word = 0;
		}
		str++;
	}
	return (count);
}

/**
 * word_length - Calculates the length of a word
 * @str: The string to calculate the word length from
 *
 * Return: The length of the word
 *
 * Description: This function counts characters until it
 * encounters a space or null terminator, effectively
 * measuring the length of a word.
 */
int word_length(char *str)
{
	int len = 0;

	while (str[len] != ' ' && str[len] != '\0')
		len++;
	return (len);
}

/**
 * strtow - Splits a string into words
 * @str: String to split
 *
 * Return: Pointer to an array of strings (words)
 *
 * Description: This function allocates memory for an array of strings,
 * then populates it with words from the input string. It handles
 * memory allocation failures and edge cases.
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, word_count, len;

	if (str == NULL || *str == '\0')
		return (NULL);  /* Handle empty string */

	word_count = count_words(str);
	if (word_count == 0)
		return (NULL);  /* No words found */

	words = malloc(sizeof(char *) * (word_count + 1));
	if (words == NULL)
		return (NULL);  /* Memory allocation failed */

	for (i = 0, j = 0; i < word_count; i++)
	{
		while (str[j] == ' ')
			j++;  /* Skip spaces */

		len = word_length(str + j);
		words[i] = malloc((len + 1) * sizeof(char));
		if (words[i] == NULL)
		{
			/* Free if allocation fails */
			for (k = 0; k < i; k++)
				free(words[k]);
			free(words);
			return (NULL);
		}

		/* Copy word to the allocated memory */
		for (k = 0; k < len; k++)
			words[i][k] = str[j + k];
		words[i][k] = '\0';  /* Null-terminate the word */

		j += len;  /* Move to the next word */
	}

	words[word_count] = NULL;  /* Null-terminate the array of words */
	return (words);
}
