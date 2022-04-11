#ifndef HEADER
#define HEADER

/**
 * struct dog - structure of a dog.
 * @name: member 1
 * @age: member 2
 * @owner: member 3.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
