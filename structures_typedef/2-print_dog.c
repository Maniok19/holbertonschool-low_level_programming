#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - Prints the details of a dog structure
 * @d: Pointer to a struct dog
 *
 * Description: This function takes a pointer to a struct dog and prints
 * the details of the dog, including its name, age, and owner. If any of
 * the elements of the struct are NULL, it prints (nil) instead.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}
	printf("Name : %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
