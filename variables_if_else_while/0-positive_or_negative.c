#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/*
 * main - assign a random number to the variable n
 *
 * Return: The number, followed by
 *   if the number is greater than 0: is positive
 *   if the number is 0: is zero
 *   if the number is less than 0: is negative 
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
    if (n>0)
        puts("is positive");
    else if (n==0) 
        puts ("is zero");
    else
        puts("is negative");
        
	return (0);
}