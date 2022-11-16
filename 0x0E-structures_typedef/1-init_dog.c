#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - function to initialize a variable dog of type struct
 * @d_name: name of dog variable
 * @d: dog
 * @age: age of dog
 * @owner: owner of the dog
 */

void init_dog(struct dog *d, char *d_name, float age, char *owner)
{
	if (d != NULL)
	{
		d->d_name = d_name;
		d->age = age;
		d->owner = owner;
	}
}
