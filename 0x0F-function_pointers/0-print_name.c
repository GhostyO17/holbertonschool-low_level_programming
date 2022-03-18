#include <stdio.h>
#include "function_pointers.h"
#include <stlib.h>

/**
 * print_name - prints a given name
 * @name: pointer to name
 * @f: pointer to function that returns nothing
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && *name != '\0' && f != NULL)
f(name);
}
