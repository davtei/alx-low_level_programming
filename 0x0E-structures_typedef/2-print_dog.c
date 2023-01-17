#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function that prints a struct dog.
 * If an element of d is NULL, prints (nil) instead of this element.
 * (If name is NULL, prints Name: (nil)).
 * If d is NULL print nothing.
 * @d: struct dog to print.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
			
