#include "main.h"

/**
 *_strcat- Moneda14
 *@dest:varia
 *@src:varia
 *Return:dest
 */
char *_strcat(char *dest, char *src)
{
char *d;
char *s;

d = dest;
for (; *d != '\0'; d++)
{
}
s = src;
while (*s != '\0')
{
*d = *s;
d++;
s++;
}
*d = '\0';
return (dest);
}
