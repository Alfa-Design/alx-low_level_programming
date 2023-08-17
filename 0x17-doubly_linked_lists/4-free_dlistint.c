#include "lists.h"

/**
 * free_dlistint - it frees a dlistint_t list.
 * @head: it points to head of the list
 * Return: Returns  nothing
 **/
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	return;

	while (head->next)
	{
	head = head->next;
	free(head->prev);
	}
	free(head);
}
