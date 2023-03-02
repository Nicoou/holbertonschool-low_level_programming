#include "main.h"

unsigned int
_strspn(char *s, char *accept)
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
