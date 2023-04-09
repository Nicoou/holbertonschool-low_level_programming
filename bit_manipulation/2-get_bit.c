#include "main.h"

unsigned int lenbit(unsigned long int n);
/**
 * get_bit - get an number in binary give for index.
 *
 * @n: number in decimals.
 * @index: index.
 * Return: returns an number in specificier.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8 - 10)
	{
		return (-1);
	}

	mask = 1UL << index;
	
	if (n & mask)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
