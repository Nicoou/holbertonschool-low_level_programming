#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - Write a function that draws a diagonal.
 *
 *@n: number
 *
 */

void
print_diagonal(int n)
{
	int i;
	int h;

	if (n < 0)
	{
		_putchar('\n');
	}
	else if (n == 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (h = i; h >= 1; h--)
			{
				if (h != 1)
				{
					_putchar(' ');
				}
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
