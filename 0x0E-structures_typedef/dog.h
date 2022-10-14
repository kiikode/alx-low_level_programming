#ifndef _DOG_
#define _DOG_

/**
 * dog_t - New name for type struct dog
 */
typedef struct dog dog_t;

/**
 * struct dog - Structure storing some information of a dog
 *
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Description: Structure dog storing its name, age and owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
