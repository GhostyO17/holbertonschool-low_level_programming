#include "main.h"
#include <stdio.h>

/**
* print_numbers - print numbers from 0 to 9
* Return: 0
*/

void print_numbers(void)

{
char x = '0';
while (x <= '9')
{
_putchar(x);
x++;
}
_putchar ('\n');
return;
}
