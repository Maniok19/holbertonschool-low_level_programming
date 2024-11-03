#include "main.h"
#include <stdio.h>
/**
 * main - print prime factor
 *
 * Return: Always 0
 */
int main(void)
{
unsigned long n = 612852475143;
unsigned long largest = 2;
unsigned long fact = 2;

while (n > 1)
{
	if (n % fact == 0)
	{
		largest = fact;
		while (n % fact == 0)
		{
			n /= fact;
		}
		}
		fact++;
		if (fact * fact > n)
		{
			if (n > 1)
			{
				largest = n;
			}
			break;
		}
}

	printf("%lu\n", largest);

	return (0);
}
