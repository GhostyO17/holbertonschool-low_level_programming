#include "main.h"


/**
 *print_sign - prints sign of a number
 *@n: number to define
 *Return: always 0
 */

int print_sign(int n)
{
int ret;
if (n > 0)
{
ret = 1;
_putchar('+');
}
else if (n < 0)
{
ret = -1;
_putchar('-');
}
else
{
ret = 0;
_putchar(+'0');
}
return (ret);
}
