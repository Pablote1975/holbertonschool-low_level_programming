#include "main.h"

/**
 *leet- M14
 *@t:varia
 *
 *Return:t
 */
char *leet(char *t)
{
char *nums = "43071";
 char *let = "aeotlAEOTL";
 int i = 0;
 int j = 0;
 
 for (; t[i]; i++)
   {
     for (; let[j]; j++)
       {
	 if (t[i] == let[j])
	   {t[i] = nums[j];
	     break;
	       }
}
}
return (t);
}
