#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints english alphabet ten times
 */
void print_alphabet_x10(void)
{
int num;
char abc;
for (num = 0; num < 10; ++num)
{
for (abc = 'a'; abc <= 'z'; ++abc)
{
_putchar(abc);
}
_putchar('\n');
}
return;
}
