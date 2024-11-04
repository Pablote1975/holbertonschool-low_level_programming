#include "main.h"

/**
 *rev_strig- Moneda 13
 *@s:variable
 *Return:
 */
void rev_string(char *s)
{
int len = 0;
char *com = s;
char *fin = s;

while (*fin != '\0')
{
fin++;
len++;
}
fin--;

while (com < fin)
{
char var = *com;
*com = *fin;
*fin = var;
com++;
fin--;
}
}
