#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - a new struct type
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Discription: A new type struct dog with 3 members
 *
 * dog_t - typedef for struct dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif