#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: needle will be searched in haystack
 * @needle: search needle in haystack
 * Return: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *x = haystack;
char *n = needle;
while (*x == *n && *n != '\0')
{
x++;
n++;
}
if (*n == '\0')
return (haystack);
}
return (0);
}
