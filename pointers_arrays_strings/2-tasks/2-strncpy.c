#include "main.h"

/**
 * _strncpy - Concatenates two strings
 * @src : source of my data
 * @dest : final destiny where I will print my data
 * @n : quantity of chars to be printed
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int laura;

	for (laura = 0; laura < n && src[laura] != '\0'; laura++)
	{
		dest[laura] = src[laura];
	}

		while (laura < n)
		{
			dest[laura++] = '\0';
		}

		return (dest);
}
