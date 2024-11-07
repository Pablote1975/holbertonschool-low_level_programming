#include "main.h"

/**
 *leet- M14
 *@t:varia
 *
 *Return:t
 */
char *leet(char *t)
{
char num[5] = "43071";
char let[5] = "AEOTL";
int i = 0;
int j = 0;
int l = 5;

while (t[i])
{
j = 0;
while (j < l)
{
if (t[i] == let[j] || t[i] - 32 == let[j])
{
t[i] = num[j];
}
j++;
}
i++;
}
return (t);
}
