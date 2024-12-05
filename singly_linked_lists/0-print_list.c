#include "lists.h"
#include <stdio.h>
#include <stddef.h>
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current)
	{
		if (current->str)
			printf("[%u] %s\n", current->len, current->str);
		else
			printf("[0] (nil)\n");
		count++;
		current = current->next;
	}
	return (count);
}
