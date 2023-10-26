#include "main.h"

/**
 * print_binary - Prints the binary equivalent of a decimal number.
 * @n: Number to print in binary.
 */
void print_binary(unsigned long int n)
{
	int bit_pos = 63; /*Position of the highest bit*/
	int flag = 0;   /*Flag to track if non-zero bit encountered*/

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (bit_pos >= 0)
	{
		unsigned long int mask = 1UL << bit_pos;
		int bit = (n & mask) ? 1 : 0;

		if (bit)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag)
		{
			_putchar('0');
		}

		bit_pos--;
	}
}
