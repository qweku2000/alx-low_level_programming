#include "main.h"

/**
 * _pow_recursion - Returns the value of x to the power of y.
 * @x: number to be that gets the exponents
 * @y: number that becomes the exponents
 *
 * Return: The value of x raised to the power of y.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
