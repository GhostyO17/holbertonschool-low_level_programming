#include "main.h"

/**
* _strspn - gets the length of a prefix string
* @s: total number of bytes that will be return
* @accept: total number of bytes that will be use by _strspn
* Return: 0
*/
unsigned int _strspn(char *s, char *accept)
{
int len = 0;
int x = 0;
int y = 0;

while (s[x] != '\0')
{
while (accept[y] != '\0')
{
if (accept[y] == s[x])
len++;
y++;
}
y = 0;
x++;
if (s[x] == ' ')
{
break;
}
}
return (len);
}
