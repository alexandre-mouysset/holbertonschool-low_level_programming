#include "main.h"

/**
* times_table - print table
* @: Hour and minute
* Return: always 0
*/

void times_table(void)
{
	int table, multiplicateur, resultat;


	for (table = 0; table < 10; table++)
	{

		for (multiplicateur = 0; multiplicateur < 10; multiplicateur++)
		{
			resultat = table * multiplicateur;

			if (resultat <= 9)
			{
				_putchar(32);
				_putchar('0' + resultat);

			}
			else
			{
				_putchar('0' + (resultat / 10));
				_putchar('0' + (resultat % 10));

			}
			if (multiplicateur != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
