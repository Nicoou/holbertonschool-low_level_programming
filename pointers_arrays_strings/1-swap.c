#include "main.h"
#include <stdio.h>

void
swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
