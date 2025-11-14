#include "dog.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the new dog, or NULL if it fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *toutou;
	int i, j;

	if (name == NULL || owner == NULL)
		return (NULL);

	toutou = malloc(sizeof(dog_t));
	if (toutou == NULL)
		return (NULL);

	for (i = 0; name[i] != '\0'; i++)
		;
	toutou->name = malloc(i + 1);
	if (toutou->name == NULL)
	{
		free(toutou);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
		toutou->name[i] = name[i];
	toutou->name[i] = '\0';

	for (j = 0; owner[j] != '\0'; j++)
		;
	toutou->owner = malloc(j + 1);
	if (toutou->owner == NULL)
	{
		free(toutou->name);
		free(toutou);
		return (NULL);
	}
	for (j = 0; owner[j] != '\0'; j++)
		toutou->owner[j] = owner[j];
	toutou->owner[j] = '\0';

	toutou->age = age;

	return (toutou);
}
