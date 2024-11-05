#include "main.h"
#include <stdio.h>
/**
 *_strcpy- Moneda 13
 *@dest:varia
 *@src: varia
 *Return:dest
*/
char *_strcpy(char *dest, char *src)
{
int n = 0;
for (; src[n] != '\0'; n++)
{
dest[n] = src[n];
}
dest[n] = '\0';
return (dest);
}
