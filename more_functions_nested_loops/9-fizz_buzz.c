#include "main.h"
#include <stdio.h>
/**
 * main -FizzBuzz
 * Return: always 0
 */
int main(void)
{
	int count;

	for (count = 1; count <= 100; count++)
	{
		if (count % 3 == 0)
		{
			printf("Fizz");
		}
		if (count % 5 == 0)
		{
			printf("Buzz");
		}
		if (count % 3 != 0 && count % 5 != 0)
		{
			printf("%d", count);
		}
		printf(" ");
	}
	return (0);
}
