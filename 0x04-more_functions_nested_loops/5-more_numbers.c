#include "main.h"

/**
 * more_numbers - prints digits from 0 to 14 ten times
 */

void more_numbers(void)
{
int z;
char d;
for (z = 0; z < 10; z++)
{
for (d = 0; d <= 14; d++)
{
if (d > 9)
_putchar((d / 10) + '0');
_putchar((d % 10) + '0');
}
_putchar('\n');
}
return;
}
