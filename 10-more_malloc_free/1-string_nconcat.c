#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Concat two trings until that n is less than n.
 *
 * @s1: First char pointer.
 * @s2: Second char pointer.
 * @n: limit
 * Return: Memory dinamic of char type.
 **/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a = 0, b = 0, na = 0, no = 0;
	char *array = NULL;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (; s1[a]; a++)
		;

	for (; s2[b]; b++)
		;

	array = (char *)malloc((a + n + 1));
	if (array == NULL)
		return (NULL);

	for (na = 0; na < (a + n); na++)
	{
		if (na < a)
		{
			array[na] = s1[na];
		}
		else if (na >= a)
		{
			array[na] = s2[no];
			no++;
		}

	}

	array[na] = '\0';

	return (array);
}
