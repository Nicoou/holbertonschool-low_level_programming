#include "main.h"

char
*_strcpy(char *dest, char *src)
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
