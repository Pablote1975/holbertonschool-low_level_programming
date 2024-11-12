#include "main.h"
#include <stdio.h>
#include <stdlib.h>


char *_strdup(char *str)
{
    char *dupli_str;
    unsigned int i, len;

     if (str == NULL)
        return NULL;
     
     len = 0;
    while (str[len] != '\0')
        len++;

    dupli_str = malloc(sizeof(char) * (len + 1));
    
    if (dupli_str == NULL)
        return NULL;

    for (i = 0; i < len; i++)
    {
        dupli_str[i] = str[i];
    }
    dupli_str[len] = '\0';

    return (dupli_str);
}
