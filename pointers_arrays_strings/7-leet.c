#include "main.h"

/**
 *leet- M14
 *@t:varia
 *
 *Return:t
 */
char *leet(char *t)
{
int i = 0;
for (; t[i]; i++)
{
if ((t[i] >= 'a' && t[i] <= 'z') || (t[i] >= 'A' && t[i] <= 'Z'))
{
if (t[i] == 'a' || t[i] == 'A')
{
t[i] = '4';
}
else if (t[i] == 'e' || t[i] == 'E')
{
t[i] = '3';
}
else if (t[i] == 'o' || t[i] == 'O')
{
t[i] = '0';
}
else if (t[i] == 't' || t[i] == 'T')
{
t[i] = '7';
}
else if (t[i] == 'l' || t[i] == 'L')
{
t[i] = '1';
}
}
}
return (t);
}
