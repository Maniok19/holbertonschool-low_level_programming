#include "main.h"
#include <stdio.h>
/**
 * main - print the nuber of arguments of the program
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
