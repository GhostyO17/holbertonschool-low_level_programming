#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns pointer to space in memory which is a copy of str
 * @str: string
 * Return: 0
 */
char *_strdup(char *str)
{
char *abc;
int i, r = 0;
if (str == NULL)
return (NULL);
i = 0;
while (str[i] != '\0')
i++;
abc = malloc(sizeof(char) * (i + 1));
if (abc == NULL)
return (NULL);
for (r = 0; str[r]; r++)
abc[r] = str[r];
return (abc);
}
