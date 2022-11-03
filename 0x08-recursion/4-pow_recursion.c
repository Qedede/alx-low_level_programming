#include "main.h"

/**
 * _pow_recursion - returns the value of x rasied to power of y
 * @x: the base
 * @y: the exponent
 * Return: the result of x raised to y
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	return (x *= _pow_recursion(x, y - 1));
}
