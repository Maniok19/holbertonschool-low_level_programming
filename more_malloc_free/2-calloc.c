#include <stdlib.h>
#include "main.h"
/**
 * _calloc - allocate memory for an array
 * @nmemb: Number of elements to allocate.
 * @size: Size of each element in bytes.
 * Return: A pointer to the allocated memory, or NULL if fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total_size;
	unsigned char *byte_ptr;
	unsigned int i;

	/* Check if nmemb or size is 0 */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* Calculate total size and check for overflow */
	total_size = nmemb * size;
	if (total_size / nmemb != size)
		return (NULL);

	/* Allocate memory using malloc */
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);

	/* Initialize memory to zero */
	byte_ptr = (unsigned char *)ptr;
	for (i = 0; i < total_size; i++)
		byte_ptr[i] = 0;

	return (ptr);
}
