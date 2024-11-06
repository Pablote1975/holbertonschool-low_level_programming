#include "main.h"

/**
 *_strcat- M14
 *@dest:varia
 *@src:varia
 *@n:varia
 *Return:
 */
char *_strncpy(char *dest, char *src, int n)
{
  int l;
  for (l = 0; l < n && src[l] != '\0'; l++)

      dest[l] = src[l];
  while (l < n)
    {
      *dest++ = '\0';
      l++;
    }
  return (dest); 
}
