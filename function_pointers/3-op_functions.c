#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - add int
 * @a: firt int
 * @b: 2nd int
 * Return: Result
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - substract int
 * @a: firt int
 * @b: 2nd int
 * Return: Result
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiply int
 * @a: firt int
 * @b: 2nd int
 * Return: Result
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide int
 * @a: firt int
 * @b: 2nd int
 * Return: Result
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - modulo int
 * @a: firt int
 * @b: 2nd int
 * Return: Result
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
