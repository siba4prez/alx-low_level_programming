#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0
 * @n: pointer to the numb to change
 * @index: bit index to clear
 *
 * Return: 1 for complete, -1 for decline
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	*n &= ~(1UL << index);
	return (1);
}
