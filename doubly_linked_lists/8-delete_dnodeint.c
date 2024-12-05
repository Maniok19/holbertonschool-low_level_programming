#include "lists.h"
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - deletes the node at index of a dlist
 * @head: pointer to the head of the list
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);
	if (index == 0)
	{
		if ((*head)->next)
			(*head)->next->prev = NULL;
		*head = (*head)->next;
		free(*head);
		return (1);
	}
	while (*head)
	{
		if (i == index)
		{
			if ((*head)->next)
				(*head)->next->prev = (*head)->prev;
			(*head)->prev->next = (*head)->next;
			free(*head);
			return (1);
		}
		*head = (*head)->next;
		i++;
	}
	return (-1);
}
