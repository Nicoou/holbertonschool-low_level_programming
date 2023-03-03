#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @src : source of my data
 * @dest : final destiny where I will print my data
 *
 * Return: dest.
 */

char *_strcat(char *dest, char *src)
{
	int ana, laura;

	ana = 0;
	while (dest[ana] != '\0')
	{
		ana++;
	}

	for (laura = 0; src[laura] != '\0'; ++laura, ++ana)
	{
		dest[ana] = src[laura];
	}

	dest[ana] = '\0';

	return (dest);
}
