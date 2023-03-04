#include "main.h"

/**
 * _strstr - Finds the first occurrence of the substring needle in the
 * string haystack
 * @haystack : principal string
 * @needle : substring to locate
 *
 * Return: a pointer to the beginning of the located substring, or NULL if the
 * substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	if (needle[0] == '\0')
		return (haystack + 0);
	while (haystack[b])
	{

		d = b;
		while (needle[a] == haystack[d])
		{
			if (c == 0)
				c = d;
			a++;
			d++;
			if (needle[a] == '\0')

				return (haystack + b);

		}
		a = 0;
		c = 0;
		b++;
	}
	return (0);
}
