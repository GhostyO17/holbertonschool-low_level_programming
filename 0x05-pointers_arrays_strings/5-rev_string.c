#include "main.h"
#include <string.h>

/**
 * rev_string - reverse a string
 * @s: string 
 * Return: string that will be printed backwards
 */
void rev_string(char *s)
{
char strev = s[0];
int fin;
int ini = 0;
while (s[ini] != '\0')
ini++;
for (fin = 0; fin < ini; fin++)
{
ini--;
strev = s[fin];
s[fin] = s[ini];
s[ini] = strev;
}
}
