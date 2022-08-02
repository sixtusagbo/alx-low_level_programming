#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: dog struct
 * @name: name for d
 * @age: age for d
 * @owner: owner of d
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
