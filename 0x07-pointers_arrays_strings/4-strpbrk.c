#include "main.h"

/**
* _strpbrk - searches a set of bytes in a given string
* @s: searches s in accept
* @accept: string
* Return: 0
*/
char *_strpbrk(char *s, char *accept)
{
int x = 0;
int i;

while (s[x] != '\0')
{
i = 0;
while (accept[i] != '\0')
{
if (s[x] == accept[i])
{
return (s + x);
}
i++;
}
x++;
}
return (0)
