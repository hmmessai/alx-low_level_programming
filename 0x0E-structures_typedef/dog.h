#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - A new structure describing a dog
 * @name: the name of the dog
 * @age; the age of the dog
 * @owner: the owner's name 
 *
 * Description: struct called "dog" that stores its name, its age
 * 		and the name of its owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */

typedef struct dog dog_t;


#endif
