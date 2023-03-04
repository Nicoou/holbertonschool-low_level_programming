#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 *  puts2 - prints a string and reverse it
 *  @str: string.
 */

void puts2(char *str)
{
	size_t num;

	for (num = 0; num < strlen(str); num += 2)
	{
		_putchar(str[num]);
	}
	_putchar('\n');
}
