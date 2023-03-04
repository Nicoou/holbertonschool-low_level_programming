#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: array
 * @n: number of elements of the array to swap
 */

void reverse_array(int *a, int n)
{
	int rev = 0, ana = 0;
	int laura = n - 1;

	for (; ana <= laura; ana++, laura--)
	{
		rev = a[ana];
		a[ana] = a[laura];
		a[laura] = rev;
	}
}
