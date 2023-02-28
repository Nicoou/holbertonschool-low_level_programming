#include "main.h"
#include <stdio.h>

void
print_array(int *a, int n)
{
	int b = 0;

	for (; b < n; b++)
	{
		printf("%d", a[b]);


		if (b < n - 1)
		{
			printf(", ");
		}
	}
	putchar('\n');
}
