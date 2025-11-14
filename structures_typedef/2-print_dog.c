#include "dog.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_dog - Prints the fields of a dog structure
 * @d: Pointer to the dog structure to print
 *
 * Description: Prints the dog's name, age, and owner.
 *              If a field is NULL, "(nil)" is printed instead.
 *              If @d is NULL, nothing is printed.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
		    printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
