#include <stdio.h>
#include <stdlib.h>

/**
 *main - Entry Point
 *@argc: Char
 *@argv: Int
 *Return: If the args != Null return 0 else 1
 */

int main(int argc, char *argv[])
{
	int mult;
	int val1;
	int val2;

	((void)argc);

	if (argv[1] != NULL && argv[2] != NULL)
	{

		val1 = atoi(argv[1]);
		val2 = atoi(argv[2]);

		mult = val1 * val2;

		printf("%d\n", mult);
		return (0);
	}
	else
	{
		printf("Error");
		return (1);
	}
}
