#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
*main - Entry point
*Return: Always 0 (Success)
*/
int main(void)
{
int n, u;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	u = n % 10;
if (u > 5)
{
printf("the last digit of %d is %d and is greater than 5\n", n, u);
}
 else if (u < 6 && u != 0)
{
printf("the last digit of %d is %d and is less than 6 and not 0\n", n, u);
}
else
printf("Last digit of %d is %d and is 0\n", n, u);
	/* your code goes there */
return (0);
}
