#include <stdlib.h>
#include "dog.h"

/**
* new_dog - creates a new dog
* @name: the name
* @age: the age
* @owner: the owner
*
* Return: the new dog or NULL at failure
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j, k;
	dog_t *husky;

	for (i = 0; name[i] != '\0'; i++)
		;
	i++;
	for (j = 0; owner[j] != '\0'; j++)
		;
	j++;

	husky = malloc(sizeof(dog_t));
	if (husky == 0)
	{
		free(husky);
		return (NULL);
	}
	husky->name = malloc(sizeof(husky->name) * i);
	if (husky->name == 0)
	{
		free(husky->name);
		free(husky);
		return (NULL);
	}
	for (k = 0; k < i; k++)
		husky->name[k] = name[k];
	husky->name[k] = name[k];
	husky->age = age;
	husky->owner = malloc(sizeof(husky->owner) * j);
	if (husky->owner == 0)
	{
		free(husky->owner);
		free(husky->name);
		free(husky);
		return (NULL);
	}
	for (k = 0; k < j; k++)
		husky->owner[k] = owner[k];
	husky->owner[k] = owner[k];

	return (husky);
}
