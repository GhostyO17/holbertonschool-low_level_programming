#include <stdio.h>
/**
*main - Entry point
*Return: Always 0 (Success)
*/
int main(void)
{
int nume = 0;
while (nume < 10)
{
putchar(nume + '0');
nume++;
}
putchar('\n');
return (0);
}
