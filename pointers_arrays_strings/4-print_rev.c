#include "main.h"

/**
 *print_rev- Moneda 13
 *@s:variable
 *Return:
 */

void print_rev(char *s)
{
int len = 0;
while (*s != '\0')
{
len++;
s++;
}
s--;

while (len--)
{
putchar(*s);
s--;
}
putchar('\n');
}
