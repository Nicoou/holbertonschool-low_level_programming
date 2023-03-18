#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - Adds positive numbers
 *
 * @argc: int
 * @argv: *char
 * Return: 0: Success. 1: Error.
 */

int main(int argc, char *argv[])
{
	int x = 0;
	int i = 1;
	int f = 0;

	if (argc < 3)
	{
		printf("0\n");
		return (0);
	}

	for (; i < argc; i++)
	{
		for (f = 0; argv[i][f]; x++)
		{
			if (!isdigit(argv[i][f]))
			{
				printf("Error\n");
				return (1);
			}
		}
		x += atoi(argv[i]);
	}
	printf("%d\n", x);
	return (0);
}
