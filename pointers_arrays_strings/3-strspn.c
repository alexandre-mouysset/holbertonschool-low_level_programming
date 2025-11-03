#include "main.h"

/**
 * _strspn - Calculates the length of the initial segment of s
 *            which consists entirely of characters in accept
 * @s: pointer to the string to be scanned
 * @accept: pointer to the string containing the characters to match
 *
 * Return: the number of bytes in the initial segment of s
 *         that consist only of characters from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int same;
	int compteur;

	for (i = 0; s[i] != '\0'; i++)
	{
		same = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				same = 1;
			}
		}
		if (same == 1)
		{
			compteur++;
		}
		else
		{
			break;
		}
	}
	return (compteur);
}
