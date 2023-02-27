#include "main.h"
#include <stdio.h>

void
_puts(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		putchar(str[x]);
	}
	
	_putchar('\n');
}
