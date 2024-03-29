#include "main.h"

unsigned int lenbit(unsigned long int n);
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 *
 * @n: number in decimals.
 * @index: index.
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	mask = 1UL << index;
	*n |= mask;

	return (1);
}
