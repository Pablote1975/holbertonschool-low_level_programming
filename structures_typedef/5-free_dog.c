#include "dog.h"
#include <stdlib.h>
/**
 *free_dog- Moneda 20
 *: name
 *: age
 *r: owner
 *@d: variable
 *return:dog
 */

void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
}
