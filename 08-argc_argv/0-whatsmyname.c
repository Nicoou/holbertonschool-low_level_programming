#include <stdio.h>

/**
 *main -  entry point
 *@argc:int
 *@argv: contiene el nombre programa que estamos ejecutando
 *Return: retunrs 0
 */

int main(int argc, char *argv[])
{
	((void)argc);

	printf("%s\n", argv[0]);
	return (0);
}
