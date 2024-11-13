#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array and initializes it to zero.
 * @nmemb: Number of elements to allocate.
 * @size: Size of each element.
 *
 * Return: Pointer to the allocated memory, or NULL if it fails or
 *         if nmemb or size is 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr = malloc(nmemb * size);
	unsigned int i;

	/*Check for zero allocation*/
	if (nmemb == 0 || size == 0)
		return (NULL);

	if (ptr == NULL)
		return (NULL);

	/*Initialize allocated memory to zero*/
	for (i = 0; i < (nmemb * size); i++)
		((char *)ptr)[i] = 0;

	return (ptr);
}
