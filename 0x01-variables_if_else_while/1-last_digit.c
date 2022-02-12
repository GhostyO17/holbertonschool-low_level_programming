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
  int n, udigito;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	udigito = n % 10;
	if (udigito > 5)
	  {
	    printf("the last digit of %d is %d and is greater than 5\n", n, udigito);
	  }
	else if(udigito < 6, udigito != 0)
	  {
	  printf("the last digit of %d is %d and is less than 6 and not 0\n", n, udigito);
	}
	else {
	  printf("Last digit of %d is %d and is 0\n", n, udigito);
	    }
	/* your code goes there */
	return (0);
}
	
