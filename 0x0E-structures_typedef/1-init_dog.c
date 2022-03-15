#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to an input element of type dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: structure
 **/

void init_dog(struct dog *d, char *name, float age, char *owner)

{
if (d == NULL)
;
else
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
