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
	int n;
	int we;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	we = n % 10;
	printf("Last digit of , n");
	if (n > 5)
	printf(" and is greater than 5\n");
	else if (n == 0)
	printf(" is and is less than 6 and not 0\n");
	else
	printf(" and is 0\n");
	return (0);
}
