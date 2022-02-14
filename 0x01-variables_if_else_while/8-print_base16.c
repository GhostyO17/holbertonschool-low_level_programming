#include <stdio.h>
/**
*main - Entry point
*Return: Always 0 (Success)
*/
int main(void)
{
int num = 0;
char hex = 'a';
while (num <= 10)
{putchar(num + '0');
num++;
}
while (hex <= 'f')
{putchar(hex);
hex++;
}
putchar('\n');
return (0);
}

