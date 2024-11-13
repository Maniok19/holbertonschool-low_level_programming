#include <stdlib.h>
#include "main.h"
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: memory previously allocated
 * @old_size: size allocated to ptr
 * @new_size: new size of memory block
 * Return: pointer to new memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i = 0;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	return (ptr);

/*Allocate new memory*/
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

/*copy content*/
	if (ptr != NULL)
	{
		for (i = 0; i < old_size && i < new_size; i++)
			((char *)new_ptr)[i] = ((char *)ptr)[i];
	}
/*free old mem*/
	free(ptr);

	return (new_ptr);
}
