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
/**
 * dog_t - typedef for dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
