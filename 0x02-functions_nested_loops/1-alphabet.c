#include <stdio.h>
#include "main.h"
/**
*main - Entry point
*Return: Always 0 (Success)
*/
void print_alphabet(void)
{
char abc = 'a';
while (abc <= 'z')
{_putchar(abc);
abc++;
}
putchar('\n');
return (0);
}
