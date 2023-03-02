#include "main.h"

char
*_strstr(char *haystack, char *needle)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	if(needle[0] == '\0')
		return (haystack + 0);
	while (haystack[b])
	{

		c = b;
		while (needle[a] == haystack[c])
		{
			if (c == 0)
				c = d;
			a++;
			d++;
			if(needle[a] == '\0')
				return(haystack + b);

		}
		a = 0;
		c = 0;
		b++;
	}
	return (0);
}
