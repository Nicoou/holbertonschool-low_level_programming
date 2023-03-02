#include "main.h"

char
*_strcat(char *dest, char *src)
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
