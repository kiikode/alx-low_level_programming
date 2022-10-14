#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Create a new dog
 *
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Success
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;
	int a, rname, rowner;

	n_dog = malloc(sizeof(*n_dog));
	if (n_dog == NULL || !(name) || !(owner))
	{
		free(n_dog);
		return (NULL);
	}

	for (rname = 0; name[rname]; rname++)
		;

	for (rowner = 0; owner[rowner]; rowner++)
		;

	n_dog->name = malloc(rname + 1);
	n_dog->owner = malloc(rname + 1);

	if (!(n_dog->name) || !(n_dog->owner))
	{
		free(n_dog->owner);
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}

	for (a = 0; a < rname; a++)
		n_dog->name[a] = name[a];
	n_dog->name[a] = '\0';

	n_dog->age = age;

	for (a = 0; a < rowner; a++)
		n_dog->owner[a] = owner[a];
	n_dog->owner[a] = '\0';
	return (n_dog);
}
