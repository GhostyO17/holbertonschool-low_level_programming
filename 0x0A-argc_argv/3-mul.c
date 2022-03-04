#include <stdlib.h>
#include <stdio.h>
/**
 *main - multiply two numbers
 * @argc: arguement count
 * @argv: array of pointers to arguement strings
 * Return: result of multiplication or 1
 */
int main(int argc, char *argv[])
{
  int t, a, mul;

if (argc != 3)
{
printf("error\n");
return (1);
}

t = atoi(argv[1]);
a = atoi(argv[2]);
mul = t * a;
printf("%d\n", mul);
return (0);
}
