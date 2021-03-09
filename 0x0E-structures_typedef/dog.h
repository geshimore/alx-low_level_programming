#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a program to create struct
 * @name: dogs name
 * @age: dogs age
 * @owner: the owner of the dog
 *
 * Description: creating a struct
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
