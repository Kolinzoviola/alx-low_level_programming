#include "main.h"

/**
 * set_bit - Sets a bit at a given index to 1.
 * @n: Pointer to the number to change.
 * @index: Index of the bit to set to 1.
 *
 * Return: 1 for success, -1 error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;  /* Declare the variable at the beginning */

	if (index > 63)  /* Check for valid index range (0 to 63) */
		return (-1);

	mask = 1UL << index;
	*n |= mask;  /* Set the bit at the specified index to 1 */

	return (1);
}
