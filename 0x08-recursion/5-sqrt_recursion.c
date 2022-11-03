#include "main.h"

/**
 * _sqrt_recursion - It returns the value of square root of n
 * @n: an input integer
 * Return: The square root of n
 */
int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
		return (n);

	return (_sqrt(0, n));
}

/**
 * _sqrt - find square root
 * @n: previous value
 * @x: square root value
 * Return: the square root
 */
int _sqrt(int n, int x)
{
	if (n > x / 2)
		return (-1);
	else if (n * n == x)
		return (n);
	return (_sqrt(n + 1, x));
}
