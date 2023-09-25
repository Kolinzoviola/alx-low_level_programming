#include "lists.h"

/**
 * get_nodeint_at_index - return node
 * @head: first node
 * @index:index return
 *
 * Return:nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp = head;

	while (tmp && i < index)
	{
		tmp = tmp->next;
		i++;
	}

	return (tmp ? tmp : NULL);
}
