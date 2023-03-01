#include "main.h"

char
*_strncat(char *dest, char *src, int n)
{
	int ana = 0;
	int laura = 0;

	while (dest[ana])
	{
		ana++;
	}

	while (laura < n)
	{
		dest[ana] = src[laura];
		ana++;
		if (src[ana] == '\0')
		{
			break;
		}
		laura++;
	}

	dest[ana] = '\0';

	return (dest);
}
