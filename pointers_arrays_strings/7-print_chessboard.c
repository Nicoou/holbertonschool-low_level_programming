#include "main.h"
#include <stdio.h>

void
print_chessboard(char (*a)[8])
{
	int d = 0;
	int b;
	int c;

	while (a[d][8])
		d++;

	for (c = 0; c < d; c++)
	{
		for (b = 0; b < 8; b++)
			printf("%c", a[c][b]);
		(b == 8) ? printf("\n") : -1;
	}
}
