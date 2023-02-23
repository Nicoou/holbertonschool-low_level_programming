#include "main.h"
#include <stdio.h>

/**
 * print_triangle - Write a function that draws a diagonal.
 *
 *@size: number
 *
 * Return: Always 0
 */

void print_triangle(int size)
{
	int t, s, n;

	if (size <= 0)
	{
		putchar('\n');
	}

	for (t = 0; t < size; t++)
	{
		for (s = size - 1; s > t; s--)
		{
			_putchar(' ');
		}
		for (n = 0; n <= t; n++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

}
