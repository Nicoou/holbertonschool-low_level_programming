#include "main.h"

char
*_strchr(char *s, char c)
{
	int a = 0;

	for (; s[a]; a++)
	{
		if (s[a] == c)
		{
			return (a + s);
		}
	}
	if (c == '\0')
	{
		return (s + c);
	}

	return (0);
}
