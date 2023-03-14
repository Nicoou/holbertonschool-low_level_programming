#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - Entry Point
 *@s1: char
 *@s2: char
 *Return: str
 *
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int a = 0, b = 0, c1 = 0, c2 = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (; s1[a]; a++)
		;
	for (; s2[b]; b++)
		;
	str = malloc(sizeof(char) * ((a + b) + 1));

	if (str == NULL)
		return (NULL);

	for (; s1[c1] != '\0'; c1++)
		str[c1] = s1[c1];

	for (; s2[c2]; c2++)
		str[c1 + c2] = s2[c2];

	str[c1 + c2] = '\0';

	return (str);


}
