#include "main.h"

/**
 *_strcmp- M14
 *@s1:varia
 *@s2:varia
 *Return:*s1-*s2
 */
int _strcmp(char *s1, char *s2)
{
for (; *s1 != '\0' && *s2 != '\0' && (*s1 == *s2); s1++, s2++)
{
}
return (*s1 - *s2);
}
