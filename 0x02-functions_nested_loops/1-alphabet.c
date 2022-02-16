#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - print english alphabet
 */
void print_alphabet(void)
{
char abc = 'a';
while (abc <= 'z')
{_putchar(abc);
abc++;
}
_putchar('\n');
return;
}
