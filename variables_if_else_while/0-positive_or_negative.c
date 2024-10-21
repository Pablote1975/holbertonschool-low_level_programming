#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main- ya la medalla 2
 *()
 *Return: 0
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
printf("%d", n);
if (n > 0)
printf("is positive\n");
else if (n < 0)
printf("is negative\n");
else
printf("is zero\n");
return (0);
}
