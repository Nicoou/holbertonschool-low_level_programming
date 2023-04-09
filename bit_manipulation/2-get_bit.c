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
	unsigned int l = n;

	if (lenbit(4294967295) < index)
		return (-1);
	if (lenbit(n) < index)
		return (0);
	if (n > 1 && index > 0)
		i = get_bit(n / 2, index - 1);

	return (i & 1);
}
/**
 * lenbit - len the quantity of bit of number.
 *
 * @n: number in decimals.
 * Return: returns the quantity.
 */
unsigned int lenbit(unsigned long int n)
{
	unsigned int l = 1;

	if (n > 1)
		l = 1 + lenbit(n / 2);

	return (l);
}
