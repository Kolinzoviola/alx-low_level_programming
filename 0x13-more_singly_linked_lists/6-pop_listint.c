#include "lists.h"

/**
 * my_pop_listint -delete head node
 * @head: Pointer to the first element
 *
 * Return: The data deleted.
 */
int my_pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
