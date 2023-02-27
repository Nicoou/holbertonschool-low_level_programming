#include <stdio.h>
#include <string.h>
#include "main.h"

void
print_rev(char *s)
{
	int y = 0;

	while (s[y] != '\0')
	{
		y++;
	}
	while (y >= 0)

	y = y - 1;
	{
		_putchar(s[y]);
		y--;
	}
}
