#ifndef DOG_
#define DOG_

/**
 * struct dog - type dog with this members
 * @name: name of dog
 * @age: age of dog
 * @owner: dog breed
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif




