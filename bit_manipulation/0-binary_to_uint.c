#include <stddef.h>
/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: Binary number to convert
 * Return: The converted number, or 0 if b is NULL or contains a non-binary
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		result = result * 2 + (b[i] - '0');
	}

	return (result);
}
