#include "main.h"
#include <string.h>

/**
 *puts_half- Moneda 13
 *@str:variable
 *Return:lenght
*/

void puts_half(char *str)
{
int i = 0;
int len = strlen(str);
int n = (len - 1) / 2;

if (len % 2 != 0)
{
n++;
}
for (i = n; i < len; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
