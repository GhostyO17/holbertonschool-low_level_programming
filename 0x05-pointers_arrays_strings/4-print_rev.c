#include "main.h"
#include <string.h>

/**
 * print_rev - returns a resersed string
 * @s: string to reverse
 * Return: string backwards
 */
void print_rev(char *s);
{
int x = 0;
int z;
while (*s != '\0')
{
x++;
s++;
}
s--;
for (z = x; z > 0; z--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
