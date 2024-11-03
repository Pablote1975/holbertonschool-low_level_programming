#include "main.h"

/**
 *_strlen- Moneda 13
 *@s:variable
 *Return:lenght
*/

int _strlen(char *s)
{
int len = 0;
while (*s != '\0')
{
len++;
s++;
}
return (len);
}
