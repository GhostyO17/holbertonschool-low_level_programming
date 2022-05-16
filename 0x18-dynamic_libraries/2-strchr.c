

#include "main.h"

/**
 * _strchr - locates a character in a string
 * @c: character to be found
 * @s: string that will be searched
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
int x = 0;
for (; s[x] >= '\0'; x++)
{
if (s[x] == c)
return (&s[x]);
}
return (0);
}
