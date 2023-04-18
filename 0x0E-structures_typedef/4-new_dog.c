#include <stdlib.h>
#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
  * new_dog -  creates a new dog.
  * @name: new dog name
  * @age: age of a new dog
  * @owner: owner of the dog
  * Return: NULL
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *PP_dog;
	int name_l = 0, own_l = 0;

	if (name != NULL && owner != NULL)
	{
		name_l = _strlen(name) + 1;
		own_l = _strlen(owner) + 1;
		PP_dog = malloc(sizeof(dog_t));

		if (PP_dog == NULL)
			return (NULL);

		PP_dog->name = malloc(sizeof(char) * name_l);

		if (PP_dog->name == NULL)
		{
			free(PP_dog);
			return (NULL);
		}
		PP_dog->owner = malloc(sizeof(char) * own_l);

		if (PP_dog->owner == NULL)
		{
			free(PP_dog->name);
			free(PP_dog);
			return (NULL);
		}
		PP_dog->name = _strcpy(PP_dog->name, name);
		PP_dog->owner = _strcpy(PP_dog->owner, owner);
		PP_dog->age = age;
	}
	return (PP_dog);
}

/**
  * _strlen - Returns the length of a string
  * @s: String to count
  * Return: String length
  */

int _strlen(char *s)
{
	int n = 0;

	for (; *s != '\0'; s++)
	{
		n++;
	}

	return (n);
}

/**
  * _strcpy - Copy a string
  * @dest: Destination value
  * @src: Source value
  * Return: the pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int n;

	for (n = 0; src[n] != '\0'; n++)
	{
		dest[n] = src[n];
	}

	dest[n++] = '\0';

	return (dest);
}
