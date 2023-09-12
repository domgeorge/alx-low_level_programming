#ifndef STRUCTDOG_H
#define STRUCTDOG_H

/**
 * struct dog - new type
 * @name: pet name
 * @age: pet age
 * @owner: pet owner
 * Description: Define a new type struct
 * dog with the members
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

#endif

#ifndef FUNCS_H
#define FUNCS_H

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
