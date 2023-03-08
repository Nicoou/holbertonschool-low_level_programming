#include <stdio.h>
/**
 * main - Prints the number of arguments passed into it
 * @argc : argument count
 * @argv : argument variable
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	if (argv[0])
	{
		printf("%d\n", argc - 1);
		return (0);
	}

	return (1);
}
