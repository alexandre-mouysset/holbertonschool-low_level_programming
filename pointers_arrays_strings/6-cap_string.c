#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: input string
 *
 * This function converts the first letter of each word in a string
 * to uppercase. Words are considered to be separated by spaces,
 * punctuation marks, or newline/tab characters.
 *
 * Return: pointer to the resulting string
 */

char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ',' || str[i] == ';' || str[i] == '.' ||
			str[i] == '!' || str[i] == '?' || str[i] == '"' ||
			str[i] == '(' || str[i] == ')' || str[i] == '{' ||
			str[i] == '}' || str[i] == ' ' || str[i] == '	' ||
			str[i] == '\n')
		{
			if (str[i + 1] >= 97 && str[i + 1] <= 122)
			{
			str[i + 1] = (str[i + 1] - 32);
			}
		}
	}
	return (str);
}
