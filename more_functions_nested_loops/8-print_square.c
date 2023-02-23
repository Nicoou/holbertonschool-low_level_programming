#include "main.h"
#include <stdio.h>

/**
 * print_square - Write a function that draws a diagonal.
 *
 *@size: number
 *
 */

void
print_square(int size)
{
	int i;
	int h;

	if (size < 0)
	{
		_putchar('\n');
	}
	else if (size == 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (h = 0; h < size; h++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
