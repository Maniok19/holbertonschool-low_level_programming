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
	char *name_copy, *owner_copy;
	unsigned int i = 0, namelen = 0, ownlen = 0;

	if (name == NULL || owner == NULL)/*edgecases*/
		return (NULL);
	dog = malloc(sizeof(dog_t));/*Allocate space*/
	if (dog == NULL)
		return (NULL);/*Find namelen and ownlen*/
	for (i = 0; name[i] != '\0'; i++)
		namelen++;
	for (i = 0; owner[i] != '\0'; i++)
		ownlen++;/*Allocate memory for name and owner strings*/
	name_copy = malloc(namelen + 1);
	if (name_copy == NULL)
	{
		free(dog);
		return (NULL);
	}
	owner_copy = malloc(ownlen + 1);
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(dog);
		return (NULL);
	} /* Copy the name and owner */
	for (i = 0; name[i] != '\0'; i++)
		name_copy[i] = name[i];
	name_copy[namelen] = '\0';
	for (i = 0; owner[i] != '\0'; i++)
		owner_copy[i] = owner[i];
	owner_copy[ownlen] = '\0';/* Initialize the members of the new dog*/
	dog->name = name_copy;
	dog->age = age;
	dog->owner = owner_copy;
	return (dog);
}
