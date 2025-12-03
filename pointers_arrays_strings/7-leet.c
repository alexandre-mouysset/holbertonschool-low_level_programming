#include "main.h"

/**
 * leet - encodes a string into "1337" (leet) speak
 * @str: input string
 *
 * This function replaces certain letters in the string with numbers:
 * 'a' and 'A' -> '4', 'e' and 'E' -> '3', 'o' and 'O' -> '0',
 * 't' and 'T' -> '7', 'l' and 'L' -> '1'.
 *
 * Return: pointer to the resulting string
 */

char *leet(char *str)
{
	int i, j;
	char base[] = "aAeEoOtTlL";
	char leet[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; base[j] != '\0'; j++)
		{
			if (str[i] == base[j])
			{
				str[i] = leet[j];
			}
		}
	}
	return (str);
}
