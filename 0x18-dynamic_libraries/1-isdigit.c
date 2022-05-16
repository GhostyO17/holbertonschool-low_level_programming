#include "main.h"

/**
 * _isdigit - searches for numbers
 * @c: character to read
 * Return: 1 if a number is  detected
 */


int _isdigit(int c)
{
int num, any;
any = 0;
for (num = '0'; num <= '9'; num++)
{
if (c == num)
{
any = 1;
}
}
return (any);
}
