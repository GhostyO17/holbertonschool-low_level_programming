#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - prints numbers ommiting 2 and 4.
 *
 * Return: Always 0.
 */

void print_most_numbers(void)
{
int rmnum;
for (rmnum = '0'; rmnum <= '9'; rmnum++)
{
if ((rmnum != '2') && (rmnum != '4'))
{
_putchar(rmnum);
}
}
_putchar('\n');
return;
}
