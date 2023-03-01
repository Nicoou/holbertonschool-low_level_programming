#include "main.h"

char
*_strncpy(char *dest, char *src, int n)
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
