#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - malloc
 * @b: nb of bytes to allocate
 * Return: 98 = error
 */
void *malloc_checked(unsigned int b)
{
	int *mal;

	mal = malloc(b);
	if (mal == NULL)
		exit(98);
	return (mal);
}
