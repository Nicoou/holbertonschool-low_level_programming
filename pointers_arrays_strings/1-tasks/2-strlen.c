#include "main.h"
#include <stdio.h>

/**
* _strlen - lenght of a string
* @s: char.
*
* Return: lenght of a string
*/

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	return (count);
}
