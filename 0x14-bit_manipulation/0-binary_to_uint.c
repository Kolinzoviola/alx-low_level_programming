#include "main.h"


/**
 * binary_to_uint - Converts a binary number to unsigned int.
 * @b: String containing the binary number.
 *
 * Return: The converted number or 0 if there's an error.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec_val = 0;
	int i = 0;

	/* Check for NULL input */
	if (!b)
		return (0);

	/* Iterate through the binary string */
	while (b[i])
	{
		/* Validate each character as a binary digit */
		if (b[i] != '0' && b[i] != '1')
			return (0);

		/* Update the decimal value */
		dec_val = (dec_val << 1) | (b[i] - '0');
		i++;
	}

	/* Return the converted decimal value */
	return (dec_val);
}
