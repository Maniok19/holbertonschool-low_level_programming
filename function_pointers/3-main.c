#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - little calculator
 * @argc: argument count
 * @argv: Argument list
 * Return: 0 = Success
 */
int main(int argc, char **argv)
{
	int a, b, result;
	int (*op)(int, int);

/*Edgecases */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = get_op_func(argv[2]);
	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = op(a, b);
	printf("%d\n", result);
	return (0);
}
