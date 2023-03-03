#include "main.h"

void print_chessboard(char (*a)[8])
{
	int colum;
	int row;

	for (colum = 0; colum < 8; colum++)
	{
		for  (row = 0; row < 8; row++)
		{
			_putchar(a[colum][row]);
		}
		_putchar('\n');
	}
}
