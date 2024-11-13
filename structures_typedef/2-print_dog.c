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
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
