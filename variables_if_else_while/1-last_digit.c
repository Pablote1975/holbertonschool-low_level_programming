#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main- last digit %
*Moneda 1 task 1
*Return:0
*/
int main(void)
{
int n, precio;

srand(time(0));
n = rand() - RAND_MAX / 2;
precio = n % 10;
printf("Last digit of %d is ", n);
if (precio > 5)
printf("%d and is greater than 5\n", precio);
else if (precio < 6 && precio != 0)
printf("%d and is less than 6 and not 0\n", precio);
else
printf("%d and is 0\n", precio);
return (0);
}
