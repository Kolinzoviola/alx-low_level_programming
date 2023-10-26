#include "main.h"

/**
 * get_bit - Returns the value of a bit index
 * @n: Number to search.
 * @index: Index of the bit to retrieve (0-based).
 *
 * Return: Value of index 0 or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;  /* Declare the variable before any code */

	if (index > 63)  /* Check  valid index range (0 to 63) */
		return (-1);

    /* Right-shift n by 'index' bits and isolate the least significant bit */
	bit_val = (n >> index) & 1; /* Assign a value to the variable */

	return (bit_val);
}
