#include "main.h"

char
*string_toupper(char *s)
{
	int la = 0;

	for (; s[la]; la++)
	{

		if (s[la] >= 97 && s[la] <= 122)
		{
			s[la] = s[la] - 32;
		}

	}
	return (s);
}
