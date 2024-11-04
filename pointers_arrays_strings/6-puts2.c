#include "main.h"

/**
 *puts2- Moneda 13
 *@str:variable
 *Return:
*/

void puts2(char *str)
{
  int i = 0;
while (*str != '\0')
  {
   if (i % 2 == 0)
     {
       _putchar(*str);
     }
   str++;
   i++;
} 
_putchar('\n');
}
