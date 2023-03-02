#include "main.h"

char
*_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a];a++)
	{
		if (s[a] == c)
		{
			return (a + s);
		}

	}
	return (0);	
}
