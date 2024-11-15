#include <stdlib.h>
#include "main.h"
/**
 * is_digit - checks if a string contains only digits
 * @s: string to be evaluated
 *
 * Return: 1 if all chars are digits, 0 otherwise
 */
int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}
/**
 * errors - handles errors for main
 */
void errors(void)
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
	exit(98);
}
/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, i, ca, digit1, digit2, *result, a = 0;

	s1 = argv[1], s2 = argv[2];/*get the strings in variable*/
	if (argc != 3 || is_digit(s1) == 0 || is_digit(s2) == 0)
		errors();/*find the length*/
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;/*allocate result memory*/
	result = malloc(sizeof(int) * len);
	if (result == NULL)
		return (1);/*initialise result to 0*/
	for (i = 0; i <= len1 + len2; i++)
		result[i] = 0;/*Multiply each digit of s1 by each digit of s2*/
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = s1[len1] - '0'; /*Convert character to integer digit*/
		ca = 0; /*Reset carry for each new digit in s1*/
		for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
		{
			digit2 = s2[len2] - '0'; /*Convert character to integer digit*/
			ca += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = ca % 10; /*Store last digit in current position*/
			ca /= 10; /*Update carry for next iteration*/
		}
		if (ca > 0)
			result[len1 + len2 + 1] += ca; /*dd any remaining carry to result array*/
	}    /*Print the result, skipping leading zeros.*/
	for (i = 0; i < len - 1; i++)
	{
		if (result[i])
			a = 1; /*Set flag when we encounter the first non-zero digit*/
		if (a)
			_putchar(result[i] + '0'); /*/Print current digit if flag is set*/
	}
	if (!a)
		_putchar('0'); /*If no digits were printed, print '0'*/
	_putchar('\n');
	free(result);
	return (0);
}
