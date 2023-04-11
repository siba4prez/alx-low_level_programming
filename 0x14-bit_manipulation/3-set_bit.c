#include "main.h"

/**
 * set_bit - sets a bit value at a given index to 1
 * @n: pointer to the numb to change
 * @index: bit index set to 1
 *
 * Return: 1 for complete, -1 for decline
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	*n |= (1UL << index);
	return (1);
}
