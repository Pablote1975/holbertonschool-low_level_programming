#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *malloc_checked- Moneda 19
 *
 *@b: varaible
 * variable
 *Return: grid
 */

void *malloc_checked(unsigned int b)
{
void *ptr;

ptr = malloc(b);

if (ptr == NULL)
{
exit(98);
}
return (ptr);
}