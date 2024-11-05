#include "main.h"
#include <stdio.h>
/**
 *print_array- Moneda 13
 *@n:variable
 *@a:variable
 *Return:dest
*/
char *_strcpy(char *dest, char *src)
{
  int n = 0;
  for (; n != '\0'; n++)
    {
      dest[n] = src[n];
    }


  return (dest);
}
