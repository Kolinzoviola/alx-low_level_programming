#include "lists.h"

/**
 * listint_len - returns num of list
 * @h: linked list
 *
 * Return: number
 */
size_t listint_len(const listint_t *h)/* prototype*/
{
	size_t num = 0;/* initialization and declaration*/

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);/* returns the number of element in the list*/
}
