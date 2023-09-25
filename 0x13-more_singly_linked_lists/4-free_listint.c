#include "lists.h"

/**
 * free_listint -linked list freed
 * @head: listint_t freed
 */
void free_listint(listint_t *head)/* prototype*/
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;/* enters while loop as long as its NULL*/
		free(head);
		head = temp;
	}
}
