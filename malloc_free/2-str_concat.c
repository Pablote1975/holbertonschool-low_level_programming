#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *str_concat- Moneda 18
 *
 *@s1: varaible
 *@s2: variable
 *Return: grid
 */

char *str_concat(char *s1, char *s2)
{
char *result;
size_t len1, len2, i;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[len1] != '\0')
{
len1++;
}
while (s2[len2] != '\0')
{
len2++;
}
result = (char *)malloc(len1 + len2 + 1);

if (result == NULL)
{
return (NULL);
}
while (*s1)
{
result[i++] = *s1++;
}
while (*s2)
{
result[i++] = *s2++;
}
result[i] = '\0';

return (result);
}
