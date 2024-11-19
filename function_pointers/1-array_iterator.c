#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - print array of int
 * @array: array to print
 * @size: size of array
 * @action: function to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
	}
}
