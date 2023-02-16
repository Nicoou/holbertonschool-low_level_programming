#include <stdio.h>
/**
 * main - start
 * Return: always 0
 *
 *
 */
int main(void)
{
	char x;
		char lx;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}

	for (lx = 'A'; lx <= 'Z'; lx++)
	{
		putchar(lx);
	}
	putchar('\n');

	return (0);
}
