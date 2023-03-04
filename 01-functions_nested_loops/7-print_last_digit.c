#include "main.h"

int
print_last_digit(int n)
{
	int N = n % 10;

	if (N < 0)
	{
		N = N * -1;
	}
	_putchar (N + '0');
	return (N);
}
