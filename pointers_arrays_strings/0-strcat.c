#include "main.h"

/**
 *_strcat- M14
 *@dest:varia
 *@src:varia
 *Return:
 */
char *_strcat(char *dest, char *src)
{
  char *n = dest;

   for (*dest = 0; *dest != '\0'; dest++)
     {
     }  
    for (*src = 0; *src != '\0'; src++)
{      *dest = *src;
  dest++;
      }
*dest = '\0';
 return (n);
}
