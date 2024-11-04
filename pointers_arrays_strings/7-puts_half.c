#include "main.h"

/**
 *puts_half- Moneda 13
 *@str:variable
 *@len:variable
 *@n:variable
 *Return:lenght
*/

void puts_half(char *str)
{
  int len = length_of_the_string;
  int n = (length_of_the_string - 1) / 2;

    if (len % 2 != 0)
      {
        n++;
    }
        for (int i = n; i < len; i++)
	  {
        _putchar(str[i]);
    }
    _putchar('\n');
}
