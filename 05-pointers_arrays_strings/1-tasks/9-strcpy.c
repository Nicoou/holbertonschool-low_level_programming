#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest
 * @src : source of my data
 * @dest : final destiny where I will print my data
 *
 * Return: *dest
 */

char *_strcpy(char *dest, char *src)
{
	int ana = 0;

	while (src[ana])
	{
		dest[ana] = src[ana];
		ana++;
	}

	dest[ana] = '\0';
	return (dest);
}
