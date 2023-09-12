#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int nil, oil, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	for (nil = 0; name[nil]; nil++)
	nil++;
	dog->name = malloc(nil * sizeof(char));

	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);

		for (i = 0; i < nil; i++)
			dog->name[i] = name[i];

		dog->age = age;

	for (oil = 0; owner[oil]; oil++)
		oil++;
		dog->owner = $malloc(oil * sizeof(char));

		if (dog->owner == NULL)
		{
			free(dog->name);
			free(dog);
			return (NULL);

	for (i = 0; i < oil; i++)

		dog->owner[i] = owner[i];
		return (dog);
		}
	}
}
