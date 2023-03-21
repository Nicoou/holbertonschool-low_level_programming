#include "function_pointers.h"

/**
 * print_name - Print a name.
 *
 * @name: String to print.
 * @f: Function pointer that return nothing and contain one param char pointer.
 * Return: void.
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;

	(*f)(name);
}
