#ifndef DOG_H
#define DOG_H

/**
 * struct dog - new data type to describe dog
 * @name: the name of the dog
 * @age: age of dog
 * @owner: owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_type - type definition for dog struct
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_type *new_dog(char *name, float age, char *owner);
void free_dog(dog_type *d);

#endif
