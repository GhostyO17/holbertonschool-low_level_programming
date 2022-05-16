#include "main.h"
/**
 * _strncpy - copies two strings
 * @dest: string 1
 * @src: string 2
 * @n: number of characthers that'll be copied
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int j;
j = 0;
while (j < n && src[j] != '\0')
{
dest[j] = src[j];
j++;
}
while (j < n)
{
dest[j] = '\0';
j++;
}
return (dest);
}
