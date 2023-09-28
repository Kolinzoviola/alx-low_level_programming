#include "main.h"

/**
 * get_endianness - Checks if the machine is little or big endian.
 *
 * union: decribes memory location
 * Return: 0 for big-endian, 1 for little-endian
 */
int get_endianness(void)
{
	union
	{
		unsigned int i;
		char c[sizeof(unsigned int)];
	} test;

	test.i = 1;

    /* Check the endianness by examining the least significant byte */
	if (test.c[0] == 1)
		return (1); /* Little-endian */
	else
		return (0); /* Big-endian */
}
