#include "main.h"
#include <math.h>

int power(int x, int y);

/**
 * binary_to_uint - converson between binary a decimal.
 *
 * @b: the number in binary.
 * Return: the number in decimal.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if(b[i] == '\0')
		{
			num = num << 1;
		}

		else if (b[i] == '1')
		{
			num = (num << 1) | 1;
		}

		else
		{
			return (0);
		}
	}
	return (num);
}
