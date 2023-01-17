#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog.
 * @d: pointer to struct dog to initialize
 * @name: dog name to initialize
 * @age: dog age to initialize
 * @owner: dog owner to initialize
 * Return: void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
