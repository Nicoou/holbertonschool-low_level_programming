#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - return a pointer
 * @str: This parameter is a pointer to a string of characters
 * @leng -  Variable to store the length of the input string
 *
 * Return: srt.
 */

char *_strdup(char *str)
{
	int x;
	int leng = 0;

	char *srt = malloc(sizeof(char) * (leng * 1));

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[leng] != '\0')/*Calcular la longitud de la cadena de entrada*/
	{
		leng++;
	}

	for (x = 0; x <= leng; x++)
	{
		srt[x] = str[x];
	}

	return (srt);
}
