#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
 * new_dog- Moneda 20
 *@name: name
 *@age: age
 *@owner: owner
 * variable
 *return:dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog = malloc(sizeof(dog_t));
if (!dog)
return (NULL);

dog->name = malloc(strlen(name) + 1);
dog->owner = malloc(strlen(owner) + 1);
if (!dog->name || !dog->owner)
{
free(dog->name);
free(dog->owner);
free(dog);
return (NULL);
}
dog->age = age;
return (dog);
}
