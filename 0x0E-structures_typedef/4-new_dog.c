#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Create a new dog
 * @name: name for dog
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: dog or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_out;
	int i, nameLen, ownerLen;

	dog_out = malloc(sizeof(*dog_out));
	if (dog_out == NULL || !(name) || !(owner))
	{
		free(dog_out);
		return (NULL);
	}

	for (nameLen = 0; name[nameLen]; nameLen++)
		;

	for (ownerLen = 0; owner[ownerLen]; ownerLen++)
		;

	dog_out->name = malloc(nameLen + 1);
	dog_out->owner = malloc(ownerLen + 1);

	if (!(dog_out->name) || !(dog_out->owner))
	{
		free(dog_out->name);
		free(dog_out->owner);
		free(dog_out);
		return (NULL);
	}

	for (i = 0; i < nameLen; i++)
		dog_out->name[i] = name[i];
	dog_out->name[i] = '\0';

	for (i = 0; i < ownerLen; i++)
		dog_out->owner[i] = owner[i];
	dog_out->owner[i] = '\0';

	dog_out->age = age;

	return (dog_out);
}
