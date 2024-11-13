#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Pointer to the struct dog to be initialized
 * @name: Pointer to a character string representing the dog's name
 * @age: Float representing the dog's age
 * @owner: Pointer to a character string representing the dog's owner
 *
 * Description: This function initializes the members of a struct dog
 * with the provided name, age, and owner values.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
