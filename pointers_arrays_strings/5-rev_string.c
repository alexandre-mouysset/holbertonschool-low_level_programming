#include "main.h"

/**
 * rev_string - reverses a string in place
 * @s: pointer to the string to be reversed
 *
 * Description: This function swaps characters from the beginning
 *              and end of the string, moving toward the center,
 *              to reverse the string without using an additional array.
 */

void rev_string(char *s)
{
int i, len;
char temp;

for (len = 0; s[len] != '\0'; len++)
;


len--;

for (i = 0; i < len; len--, i++)
{
	temp = s[i];
	s[i] = s[len];
	s[len] = temp;

}
}
