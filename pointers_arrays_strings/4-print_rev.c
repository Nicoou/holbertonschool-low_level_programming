#include <stdio.h>
#include <string.h>
#include "main.h"

void
print_rev(char *s)
{
	int y = 0;

	while (s[y])
		y++;
	y--;

	while (y >= 0)
	{
		_putchar(s[y]);
		y--;
	}
	_putchar('\n');
}
