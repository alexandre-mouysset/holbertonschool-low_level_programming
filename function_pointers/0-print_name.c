#include "function_pointers.h"

/**
 * print_name - calls a function to print a name
 * @name: the name to print
 * @f: pointer to the printing function
 *
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
