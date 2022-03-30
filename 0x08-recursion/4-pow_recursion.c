#include "main.h"

/**
 * _pow_recursion - function that calculates the
 * value of x the power of y.
 * @x: input value.
 * @y: input value.
 * Return: x the power of y.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
