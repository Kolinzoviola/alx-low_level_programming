#include "main.h"

/**
 * clear_bit - Sets the value of a given bit to 0.
 * @n: Pointer to the number to change.
 * @index: Index of the bit to clear.
 *
 * Return: 1 for success, -1 for failure.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;  /* Declare the variable at the beginning */

	if (index > 63)  /* Check for valid index range (0 to 63) */
		return (-1);

	mask = 1UL << index;
	mask = ~mask; /* Invert the bit at the specified index in the mask */
	*n &= mask;   /* Clear the bit at the specified index in *n */

	return (1);
}
