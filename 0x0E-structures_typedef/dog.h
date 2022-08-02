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

typedef struct dog dog;

#endif /* DOG_H */
