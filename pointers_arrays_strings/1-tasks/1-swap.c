#include "main.h"
#include <stdio.h>

/**
 *swap_int - swaps the values of two integers
 *
 *@a: pointer
 *@b: pointer
 *@temp: saves the value of b temporarily
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
