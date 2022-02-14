#include <stdio.h>
/**
*main - Entry point
*
*Return: Always 0 (Success(
*/
int main(void)
{
char num;
char hex;
for (num = '0' ; num <= '9' ; num++)
putchar(num);
for (hex = 'a'; hex <= 'f'; hex++)
putchar(hex);
putchar('\n');
return (0);
}
