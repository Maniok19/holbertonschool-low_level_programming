#include "main.h"
/**
 * guess - helper function to check for prime number
 * @n: source int
 * @a: current divisor to check
 * Return: 1 if prime, 0 if not
 */
int guess(int n, int a)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	if (n % a == 0)
		return (0);
	if (a * a > n)
		return (1);
	return (guess(n, a + 1));
}
/**
 * is_prime_number - check if it is prime number
 * @n: source int
 * Return: 1 = is prime, 0 = is not
 */

int is_prime_number(int n)
{
	return (guess(n, 2));
}

