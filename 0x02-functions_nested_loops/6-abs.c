#include "main.h"

/**
 * _abs - computes absolute value
 * @z: input
 * Return: varies
 */

int _abs(int z)
{
int num;
if (z >= 0)
{
num = z;
}
else if (z < 0)
{
num = z * -1;
}
return (num);
}
