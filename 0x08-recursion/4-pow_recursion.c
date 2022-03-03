#include "main.h"

/**
 * _pow_recursion - raises x to he power of y
 * @x: number
 * @y: raise to
 * Return: x to the power of y
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
else
return (x * _pow_recursion(x, y - 1));
}
