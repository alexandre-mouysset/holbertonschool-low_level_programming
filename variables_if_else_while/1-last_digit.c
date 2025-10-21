#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - last digit
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int x = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (x > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", x, n);
	}
	else if (x == 0)
	{
		printf("Last digit of %d is %d and is 0\n", x, n);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", x, n);
	}
	return (0);
}
