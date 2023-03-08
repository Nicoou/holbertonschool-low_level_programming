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

	for (x = 1; x < argc; x++)
	{
		printf("%s", argv[x]);
	}
	return (0);
}
