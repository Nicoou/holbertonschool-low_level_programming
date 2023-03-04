#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void
more_numbers(void)
{
	int num;
	int var = 0;
	int i;
	int l;

	for (num = 0; num <= 9; num++)
	{
		var = 0;
		while (var <= 14)
		{
		i = var % 10;
		l = var / 10;
		if (l != 0)
		{
			_putchar(l + '0');
		}
		_putchar(i + '0');
		var++;
		}
		_putchar('\n');
	}
}
