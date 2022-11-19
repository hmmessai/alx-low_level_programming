#ifndef DOG_H
#define DOG_H

/**
 * File: dog.h
 * Description: Header file containing a struct
 * 		that define 3 elements
 */

/**
 * struct dog - A new structure describing a dog
 * @name: the name of the dog
 * @age; the age of the dog
 * @owner: the owners name 
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - a typedef for struct dog
 */

#endif
