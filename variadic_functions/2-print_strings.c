#include "variadic_functions.h"

/**
 * print_strings - Print strings
 *
 * @separator: const *char
 * @n: const unsigned int
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list param;
	unsigned int i = 0;
	char *save;

	va_start(param, n);

	if (separator == NULL)
		separator = "";

	for (; i < n; i++)
	{
		if (i + 1 != n)
		{
			save = va_arg(param, char *);
			printf("%s%s", save, separator);
		}
	}

	if (n != 0)
	{
		save = va_arg(param, char *);
		if (save == NULL)
			printf("(nil)");
		else
			printf("%s", save);
	}
	putchar('\n');
	va_end(param);
}
