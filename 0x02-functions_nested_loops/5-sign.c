#include "main.h"

/**
 * print_sign - print the sing of n
 * @n: character to read
 * Return: 1 if n is positive, 0 if it's 0 and -1 if it is negative
 */


int print_sign(int n)
{

int num, ret;

ret = 0;
num = n;

if (num > 0)
{
_putchar('+');
ret = 1;
}
else if (num < 0)
{
_putchar('-');
ret = 0;
}
if (num == 0)
{
_putchar(+'0');
ret = -1;
}
return (ret);
}
