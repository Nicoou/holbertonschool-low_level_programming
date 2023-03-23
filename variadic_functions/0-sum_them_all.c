#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - sum of all numbers.
 * @n: the first int.
 * Return: return the sum of all numbers.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int a;
	int x = 0;

	if (n == 0)
		return (0);

	va_start(ap, n);
	for (a = 0; a < n; a++)
		x = x + va_arg(ap, const unsigned int);

	va_end(ap);
	return (x);
}
