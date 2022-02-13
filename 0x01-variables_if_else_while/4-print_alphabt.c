#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 **/
int main(void)
{
int rmqe;
for (rmqe = 'a'; rmqe <= 'z'; rmqe++)
{
if ((rmqe != 'e') && (rmqe != 'q'))
{
putchar(rmqe);
}
}
putchar('\n');
return (0);
}
