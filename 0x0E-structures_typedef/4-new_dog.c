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
	int a, b, c;
	dog_t *w;

	if (name == NULL || owner == NULL)
		return (NULL);
	w = malloc(sizeof(dog_t));
	if (w == NULL)
		return (NULL);

	for (a= 0; name[a]; a++
			;
	a++;
	dog->name = malloc(a * sizeof(char));
	if (dog->name == NULL)
	{
		free(w);
		return (NULL);
	}

	for (c = 0; i < a; i++)
		dog->name[c] = name[c];
	dog->age = age;

	for (b = 0; owner[b]; b++)
			;
		b++;
		dog->owner = malloc(a * sizeof(char));

		if (dog->owner == NULL)
		{
			free(dog->name);
			free(w);
			return (NULL);

	for (c = 0; c < a; c++)
		dog->owner[c] = owne[[c];
	return (dog);
		}
}
