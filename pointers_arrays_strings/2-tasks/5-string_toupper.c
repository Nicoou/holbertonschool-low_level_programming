#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @str : string
 *
 * Return: string with uppercase letters
 */

char *string_toupper(char *s)
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
