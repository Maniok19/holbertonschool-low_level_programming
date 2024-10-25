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
	unsigned long int result;

	for (count = 1; count <= 50; count++)
	{
		fibn = fib1 + fib2;

		if (fibn % 2 == 0 && fibn < 4000000)
		{
			result = result + fibn;
		}
		fib1 = fib2;
		fib2 = fibn;
	}
	printf("%lu\n", result);
	return (0);
}
