#include <stdio.h>

/**
 *main - entry point
 *@argv: char
 *@argc: int
 *Return: return 0
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
