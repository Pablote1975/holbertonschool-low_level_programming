#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *print_dog- Moneda 20
 * name
 * age
 * owner
 *@d: variable
 *return:
 */

void print_dog(struct dog *d)
{
if (!d)
return;

printf("Name: %s\n", d->name ? d->name : "(nil)");
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
