#include <stdio.h>
#include <stdlib.h>

/**
 * numcheck - checks if a string is a number
 * @str: string to check
 * Return: 1 if the string is a number, 0 otherwise
 */
int numcheck(char *str)
{
	int i = 0;

	if (str[0] == '-' || str[0] == '+')
		i++;

	for (; str[i] != '\0'; i++)
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
	}
	return (1);
}

/**
 * main - add arguments
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int result = 0;
	int i = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!numcheck(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
