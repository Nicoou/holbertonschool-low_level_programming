#include "main.h"
#include <stdio.h>

void
_puts(char *str)
{
	char ctr[6] = "Hello";
	int x;

	for (x = 0; ctr[x] != '\0'; x++)
		printf("&ctr[%d] = %p\n", x, str + x);
}
