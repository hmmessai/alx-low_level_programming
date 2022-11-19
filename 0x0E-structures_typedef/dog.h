#ifndef DOG_H
#define DOG_H

/**
 * File: dog.h
 * Description: Header file that define new type struct dog
 */

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
}


#endif
