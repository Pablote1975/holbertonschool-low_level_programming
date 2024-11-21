#include "dog.h"
#include <stdlib.h>
/**
 **new_dog- Moneda 20
 *@name: name
 *@age: age
 *@owner: owner
 * variable
 *Return:dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
int i, larname = 0, larowner = 0;
dog_t *dog = malloc(sizeof(dog_t));

if (!dog)
return (NULL);

while (name[larname] != '\0')
{
larname++;
}
while (owner[larowner] != '\0')
{
larowner++;
}
dog->name = malloc(larname + 1);
dog->owner = malloc(larowner + 1);

if (!dog->name || !dog->owner)
{
free(dog->name);
free(dog->owner);
free(dog);
return (NULL);
}
for (i = 0; name[i] != '\0'; i++)
{
dog->name[i] = name[i];
}
dog->name[i] = '\0';

for (i = 0; owner[i] != '\0'; i++)
{
dog->owner[i] = owner[i];
}
dog->owner[i] = '\0';

dog->age = age;
return (dog);
}
