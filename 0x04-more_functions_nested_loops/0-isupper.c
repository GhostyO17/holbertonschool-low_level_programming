#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _isupper - detect all the charecters in uppercase
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _isupper(int c)
{
int ch, a;
a = 0;
for (ch  = 'A'; ch <= 'Z'; ch++)
{
if (c == ch)
{
a = 1;
}
}
return (a);
}
