#include "dog.h"

int _strlen(char *s);
dog_t *new_dog(char *name, float age, char *owner);
char *_strcpy(char *dest, char *src);

/**
 * new_dog - creates a new dog
 * @name: the name of the new dog
 * @age: the age of the new dog
 * @owner: the name of the owner
 *
 * Return: the pointer to the new dog variable
 * 	NULL if unsuccessful
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);

	new -> name = malloc(sizeof(char) * (_strlen(name) + 1));

	if(new -> name == NULL)
	{
		free(new);
		return (NULL);
	}

	new -> owner = malloc(sizeof(char) * (_strlen(owner) + 1));

	if (new -> owner == NULL)
	{
		free(new -> name);
		free(new);
		return (NULL);
	}

	new -> name = _strcpy(new -> name, name);
	new -> age = age;
	new -> owner = _strcpy(new -> owner, owner);
	

	return (new);
}


/**
 *_strncpy - copies a string
 *@dest: destination of the string
 *@src: source of the string to be copied
 *@n: the src bytes to be copied to dest
 *Return: dest
 */
char *_strcpy(char *dest, char *src)
{
        int i;

        for (i = 0; src[i] != '\0'; i++)
                dest[i] = src[i];

	dest[i] = '\0';

        return (dest);
}

/**
 *_strlen - computes length of string
 *@s: string to be evaluated
 *Return: length of string
 */
int _strlen(char *s)
{
        int len = 0;

        while (*(s + len) != '\0')
                len++;
        return (len);
}

