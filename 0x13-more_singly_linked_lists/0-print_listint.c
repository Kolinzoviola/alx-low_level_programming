#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: num
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0; /*This declares and initia a variable nam type size_t*/

		while (h)
	{
			printf("%d\n", h->n);/*loop prints current node pointed by h*/
		num++;
		h = h->next;/*h pointer to the next node*/
	}

	return (num);
}
