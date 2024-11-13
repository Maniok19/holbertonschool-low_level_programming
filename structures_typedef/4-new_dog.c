#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: pointer to the new dog or NULL if it fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *name_copy;
	char *owner_copy;

	/*Allocate space*/
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

/*Allocate memory for name and owner strings*/

}
