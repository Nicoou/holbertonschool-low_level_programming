#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void
print_most_numbers(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
	if (num != 50 && num != 52)
		putchar(num);
	}
	putchar('\n');

}
