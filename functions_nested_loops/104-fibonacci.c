#include <stdio.h>
/**
 * main - i love u
 * Return: Always 0
 */
int main(void)
{
	int count;
	unsigned long long int fib1 = 1;
	unsigned long long int fib2 = 2;
	unsigned long long int fibn;

	printf("%lu, %lu", fib1, fib2);

	for (count = 3; count <= 98; count++)
	{
		fibn = fib1 + fib2;
		printf(", %llu", fibn);
		fib1 = fib2;
		fib2 = fibn;
	}
	printf("\n");
	return (0);
}
