#include "main.h"

/**
 * swap_int - changes de variable value using pointers to 98
 * @a: number 1
 * @b: number 2
 * Return: void.
 */
void swap_int(int *a, int *b)
{
int chan;
chan = *a;
*a = *b;
*b = chan;
return;
}

