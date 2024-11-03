#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SUM 2772
/**
 * main- give random passworld
 * Return: Always 0
 */

int main(void)
{
	int sum = 0;
	char c;

	srand(time(NULL));

	while (sum < SUM)
	{
		c = rand() % 128;
		if ((c >= 32) && (c <= 126))
		{
			putchar(c);
			sum += c;
		}
		if (sum + 32 > SUM)
			break;
	}

	if (sum < SUM)
		putchar(SUM - sum);

	return (0);
}
