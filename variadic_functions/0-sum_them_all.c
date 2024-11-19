#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - add all args
 * @n: ints to add
 * Return: Result
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i = 0, sum = 0;

	if (n == 0)
		return (0);
	va_start(list, n);

	while (i < n)
	{
	sum += va_arg(list, int);
	i++;
	}
	va_end(list);
	return (sum);
}
