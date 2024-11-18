#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *init_dog- Moneda 20
 *@name: name
 *@age: age
 *@owner: owner
 *@d: variable
 *return:
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
{
return;
}
d->name = name;
d->age = age;
d->owner = owner;
}
