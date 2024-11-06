#include "main.h"

/**
 *reverse_array- M14
 *@a:varia
 *@n:varia
 *Return:
 */
void reverse_array(int *a, int n)
{
int b, i, j;
for (i = 0, j = n - 1; i < j; i++, j--)
{
b = a[i];
a[i] = a[j];
a[j] = b;
}
}
