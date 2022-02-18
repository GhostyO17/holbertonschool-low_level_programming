#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 **/
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
