#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory n times with char b
 * @s: source char
 * @b: character that will be copied
 * @n: number of times that b will be copied
 * Return: Always 0.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
s[i] = b;
return (s);
}
