#include "main.h"
#include <stdio.h>

/**
 * main - Prints the numbers from 0 to 100 with FizzBuzz rules
 *
 * Description: This program prints numbers from 0 to 100.
 * For multiples of 3, it prints "Fizz" instead of the number.
 * For multiples of 5, it prints "Buzz" instead of the number.
 * For numbers that are multiples of both 3 and 5, it prints
 * "FizzBuzz". Each value is followed by a space.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int number;


	for (number = 1; number <= 100; number++)
	{
		if (number % 3 == 0 && number % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (number % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (number % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", number);
		}
	}
	printf("\n");
return (0);
}
