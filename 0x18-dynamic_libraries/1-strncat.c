#include "main.h"

/**
 *_strncat - concatenates two strings
 *@dest: variable destination
 *@src: variable source
 *@n: input parameter
 *Return: dest var
 */

char *_strncat(char *dest, char *src, int n)
{
int i = 0, j = 0;
for (; dest[i] != '\0'; i++)
{
}
for (; j < n; j++, i++)
{
dest[i] = src[j];
if (dest[i] == '\0')
break;
}
return (dest);
}
