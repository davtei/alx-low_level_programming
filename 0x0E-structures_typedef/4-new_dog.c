#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function creates a new dog.
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to new dog (Success), otherwise NULL (Fail)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogn;
	unsigned int i, lenName, lenOwner;

	dogn = malloc(sizeof(*dogn));
	if (dogn == NULL || !(name) || !(owner))
	{
		free(dogn);
		return (NULL);
	}
	for (lenName = 0; name[lenName]; lenName++)
		;
	for (lenOwner = 0; owner[lenOwner]; lenOwner++)
		;
	dogn->name = malloc(lenName + 1);
	dogn->owner = malloc(lenOwner + 1);
	if (!(dogn->name) || !(dogn->owner))
	{
		free(dogn->name);
		free(dogn->owner);
		free(dogn);
		return (NULL);
	}
	for (i = 0; i < lenName; i++)
		dogn->name[i] = name[i];
	dogn->name[i] = '\0';
	dogn->age = age;
	for (i = 0; i < lenOwner; i++)
		dogn->owner[i] = owner[i];
	dogn->owner[i] = '\0';
	return (dogn);
}
