#ifndef Dog_h
#define Dog_h
#include <stdio.h>
#include <stdlib.h>
/**
 *struct dog- Moneda 20
 *@name: name
 *@age: age
 *@owner: owner
 *
 *return:
 */

typedef struct dog
{
char *name;
float age;
char *owner;
}
dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
