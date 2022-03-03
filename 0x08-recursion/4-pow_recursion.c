#include "main.h"

/**
 * _pow_recursion - prints a string backwards
 * @s: inout string
 */

int _pow_recursion(int x, int y)

{
if (x < 0)
{
return (-1);
}
return (x * _pow_recursion (x, y - 1));
}
