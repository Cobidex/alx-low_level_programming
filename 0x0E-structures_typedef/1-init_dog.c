#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes the structure
 * @d: pointer
 * @name: name string
 * @age: age of dog
 * @owner: string literal
 * return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}

