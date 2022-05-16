#include "main.h"

/**
 * _memcpy - copies a memory area
 * @src: source char that will be copied
 * @dest: destination
 * @n: lenght of memory that will be copied
 * Return: Always 0.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
i = 0;
while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
