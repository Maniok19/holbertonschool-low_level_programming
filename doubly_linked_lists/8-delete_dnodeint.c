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
	dlistint_t *temp = *head;
	dlistint_t *next_node = NULL;

	if (!head || !*head)
		return (-1);
	if (index == 0)
	{
		next_node = (*head)->next;
		if (next_node)
			next_node->prev = NULL;

		free(*head);
		*head = next_node;
		return (1);
	}
	while (temp)
	{
		if (i == index)
		{
			if (temp->next)
				temp->next->prev = temp->prev;
			if (temp->prev)
				temp->prev->next = temp->next;
			free(temp);
			return (1);
		}
		temp = temp->next;
		i++;
	}
	return (-1);
}
