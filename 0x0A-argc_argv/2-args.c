#include <stdio.h>

/**
* main - entry point
*@argc: counter of flags
*@argv: array that contains the name of the file
* Return: 0
**/
int main(int argc, char *argv[])
{
while (argc--)
printf("%s\n", *argv++);
return (0);
}
