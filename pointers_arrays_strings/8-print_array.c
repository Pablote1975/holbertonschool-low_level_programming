#include "main.h"

/**
 *print_array- Moneda 13
 *@n:variable
 *Return:
*/

void print_array(int *a, int n)
{
  int i = 0;
  
  for (; i < n; i++)
    {
      if (i == n - 1)
	{
	  printf("%d\n", a[i]);
	}
      else
	{
	  printf("%d, ", a[i]);
		 
	}
    }
}
