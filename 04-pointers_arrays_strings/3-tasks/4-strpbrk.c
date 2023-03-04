#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s : string
 * @accept : chars to search
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int a = 0;
	int b = 0;

	while (s[a])
	{
		while (accept[b])
		{
			if (s[a] == accept[b])
				return (s + a);
		b++;
		}

		b = 0;
		a++;
	}
	while (accept[b])
	{
		if (s[a] == accept[b])
			return (s + a);
	b++;
	}
	return (0);
}
