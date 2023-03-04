#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s : string
 * @c : char to locate
 *
 * Return: a pointer to the first occurrence of the char c in the string s,
 * or NULL if the character is not found
 */

char *_strchr(char *s, char c)
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
		return (a + s);
	}

	return (0);
}
