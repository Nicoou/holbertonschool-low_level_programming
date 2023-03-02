#include "main.h"

/**
 *  puts_half - prints a string and reverse it
 *  @str: char
 */

void puts_half(char *str)
{
	int ana = 0;

	int laura = 0;

	while (str[ana])
	{
		ana++;
	}

	laura = ana;

	laura = (ana  + 1) / 2;

	while (str[laura])
	{
		_putchar(str[laura]);
		laura++;
	}

	_putchar('\n');
}
