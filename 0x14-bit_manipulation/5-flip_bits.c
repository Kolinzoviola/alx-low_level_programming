#include "main.h"

/**
 * flip_bits - Counts the number of bits
 * @n: First number
 * @m: Second number
 *
 * Return: Number of bits to change.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result > 0)
	{
		if (xor_result & 1)
			count++;
		xor_result >>= 1;
	}

	return (count);
}
