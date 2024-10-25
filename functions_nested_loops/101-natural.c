#include "main.h"
#include <stdio.h>
/**
 * main - trololo
 * Return: love
 */
int main(void)
{
	int x;
	int y;

	for (x = 1; x < 1024; x++)
	{
		if (x % 3 == 0 || x % 5 == 0)
		{
			y = x + y;
		}
	}
	printf("%d\n", y);
	return (0);
}
