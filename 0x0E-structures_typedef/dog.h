#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog structure
 * @name: name of dog
 * @age: age of dog
 * @owner: owner's name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog - typedef for dog
 */
typedef struct dog dog;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
