#ifndef _HEADER_
#define _HEADER_

/**
 * struct dog - will contain dog attributes
 * @name: dogs name
 * @age: dogs age
 * @owner: the owner
 *
 * Description: all dog attributes
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * @dog_t - new type
 */
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
