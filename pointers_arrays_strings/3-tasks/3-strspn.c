#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s : string
 * @accept : chars to search
 *
 * Return: the number of bytes in the initial segment of s which consist only
 * of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	unsigned int b = 0;
	unsigned int c = 0;

	while (s[a])
	{
		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				c++;
				a++;
				b = -1;
			}
			b++;
		}

		b = 0;

		a++;

		if (c != 0)
		{
			break;
		}
	}

	return (c);
}
