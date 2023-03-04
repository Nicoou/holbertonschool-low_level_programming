#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str : string
 *
 * Return: string with capitalizes words
 */

char *cap_string(char *s)
{
	int la = 0;

	while (s[la])
	{

		if (s[la] >= 97 && s[la] <= 122)
		{
			switch (s[la - 1])
			{
				case 32:
				case 44:
				case 59:
				case 46:
				case 10:
				case 9:
				case 33:
				case 63:
				case 34:
				case 40:
				case 41:
				case 123:
				case 125:

					s[la] = s[la] - 32;
			}
		}
		la++;
	}
	return (s);
}
