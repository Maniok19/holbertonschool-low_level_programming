#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply two arguments
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int result;
		int num1;
		int num2;

		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		result = num1 * num2;
		printf("%d\n", result);
		return (0);
	}
	else
	{
		printf("Error");
		return (1);
	}
}
