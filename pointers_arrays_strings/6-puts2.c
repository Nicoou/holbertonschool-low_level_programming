#include "main.h"
#include <stddef.h>
#include <string.h>

void
puts2(char *str)
{
	size_t num;

	for (num = 0; num < strlen(str); num += 2)
	{
		_putchar(str[num]);
	}
	_putchar('\n');
}
