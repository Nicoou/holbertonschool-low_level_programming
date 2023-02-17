#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 *
 */
void
print_alphabet_x10(void)
{
	char x = 'a';
	int y = 0;
	
	for (y = 0; y <= 9; y++)
	{
		x = 'a';
		while (x <= 'z')
		{
			_putchar(x);
			x++;
		}
		_putchar('\n');
	}
}
