#include "main.h"

/**
 *_sqrt_result - the function
 *@a: an int
 *@b: an int again
 *Return: the result once again
 */

int _search(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b != a && b < a)
	{
		return (_search(a, b + 1));
	}
	return (1);
}

/**
 * _sqrt_recursion_int - the natural square root of a number.
 * @n: number
 * @a: iterator
 * Return: the natural square root of a number.
 */

int _sqrt_recursion(int n)
{
	int a = 1;
	
	if (n / a != a)
	{
		a = _search(n, 1);
	}
	if (n / a == a)
	{
		return (a);
	}
	return (-1);
}
