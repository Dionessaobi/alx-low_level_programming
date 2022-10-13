#include "dog.h"
#include <stdio.h>

/**
* print_dog - prints struct dog
* @d: pointer to the struct dog elements
*
* Return: result or nil if NULL
*/
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: ");
		d->name == NULL ? printf("(nil)\n") : printf("%s\n", d->name);
		printf("Age: ");
		printf("%f\n", d->age);
		printf("Owner: ");
		d->owner == NULL ? printf("(nil)\n") : printf("%s\n", d->owner);
	}
}
