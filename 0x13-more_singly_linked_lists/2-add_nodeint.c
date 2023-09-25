#include "lists.h"

/**
 * add_nodeint - adds a new node
 * @head: pointer to the first node
 * @n:insert data to new node
 *
 * Return:new node or NULL if fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));/*allocates memory dynamically and checks*/
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;/*sets the new node to point to curent head*/
	*head = new;

	return (new);/* new node is returned*/
}
