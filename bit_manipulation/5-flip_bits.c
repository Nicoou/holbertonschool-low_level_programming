#include "main.h"
/**
 * flip_bits - this function say the quantity of bits flip to get other number.
 *
 * @n: number 1.
 * @m: number 2.
 * Return: the quantity of bits flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a = n ^ m;
	unsigned int count = 0;

	while (a != 0)
	{
		count += a & 1;
		a >>= 1;
	}

	return (count);
}
