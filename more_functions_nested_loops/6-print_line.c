#include "main.h"
#include <stdio.h>

/**
 * print_line - Write a function that draws a straight line in the terminal.
 *
 *@n: number
 *
 * Return: Always 0.
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
