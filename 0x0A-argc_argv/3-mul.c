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
int m;
if (argc == 3)
{
m = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", m);
return (0);
}
else
{
printf("Error\n");
return (1);
}
}
