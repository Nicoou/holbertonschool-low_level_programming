#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix
 *
 * @a: *char
 * @size: int
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int row, colum;
	int sum = 0;
	int sum2 = 0;

	for (row = 0; row < size; row++)
	{
		for (colum = 0; colum < size; colum++)
		{
			if (row == colum)
			{
				sum += *(a + row * size + colum);
			}
		}
	}

	for (row = 0; row <= size; row++)
	{
		for (colum = size; colum >= 0; colum--)
		{
			if (row == size - colum - 1)
			{
				sum2 += *(a + row * size + colum);
			}
		}
	}
	printf("%d, %d\n", sum, sum2);
}
