#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area pointed to
 * by s with the constant byte b
 * @s : the address of memory to print
 * @b : constant byte
 * @n : bytes of the memory area pointed to by @s
 *
 * Return: a pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;

	return (s);
}
