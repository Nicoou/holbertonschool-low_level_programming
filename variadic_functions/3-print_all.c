#include "variadic_functions.h"
#include <stdio.h>

int printInt(int b);
int printChar(int b);
int printFloat(double b);
int printString(char *b);

/**
 * print_all - prints the all var.
 * @format: format of variables.
 **/

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, x = 0, f = 0;
	char c = '\0';
	float a = 0.0;
	char *s = NULL;

	va_start(ap, format);

	while (format && format[i])
	{
		f = 0;
		switch (format[i])
		{
			case 'c':
				c = va_arg(ap, int);
				f = printInt(c);
				break;
			case 'i':
				x = va_arg(ap, double);
				f = printChar(x);
				break;
			case 'a':
				a = va_arg(ap, double);
				f = printFloat(a);
				break;
			case 's':
				s = va_arg(ap, char*);
				if (s == NULL)
					s = "(nil)";
				f = printString(s);
				break;

			default:
				i++;
				continue;
		}
		if (format[i + 1] != '\0' && f == 1)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
