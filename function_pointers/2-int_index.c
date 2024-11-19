#include "function_pointers.h"
#include <stddef.h>
/**
 * int_index - find a int in array
 * @array: array to search in
 * @size: size of array
 * @cmp: function to apply
 * Return: value of index when int found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]) != 0)
			return (i);
		i++;
	}
	return (-1);
}
