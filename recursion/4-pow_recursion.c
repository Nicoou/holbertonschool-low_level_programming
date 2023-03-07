#include "main.h"

/**
 * _pow_recursion - return the power of x
 * @x: int
 * @y: int
 * Return: returns the value of x raised to the power of y.
 */

int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		return (_pow_recursion(x, y - 1) * x);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
