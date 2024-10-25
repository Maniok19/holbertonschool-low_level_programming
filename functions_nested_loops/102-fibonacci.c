#include <stdio.h>
/**
 * main - i love u
 * Return: Always 0
 */
int main(void)
{
	int count;
	unsigned long int fib1 = 0;
	unsigned long int fib2 = 1;
	unsigned long int fibn;

	for (count = 0; count < 50; count++)
	{
		fibn = fib1 + fib2;
		printf("%lu\n", fibn);
		fib1 = fib2;
		fib2 = fibn;
	}
	return (0);
}
