#include "main.h"

/**
 * binary_to_uint - converts a binary numb to unsigned int
 * @b: binary string
 *
 * Return: the converted numb
 */
unsigned int binary_to_uint(const char *b)
{
	int g;
	unsigned int j;

	j = 0;
	if (!b)
		return (0);

	for (g = 0; b[g]; i++)
	{
		if (b[g] < '0' || b[g] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[g] - '0');
	}

	return (j);
}
