#include "variadic_functions.h"

/**
 * print_numbers - Print numbers
 *
 * @separator: const *char
 * @n: const unsigned int
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int a = 0;

	if (separator == NULL)
		separator = "";

	va_start(ap, n);

	for (; a < n; a++)
	{
		printf("%d", va_arg(ap, int));
		if (a != n - 1)
			printf("%s", separator);
	}

	putchar('\n');

	va_end(ap);
}
