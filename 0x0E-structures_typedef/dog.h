#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - the name of the struct
 * main - define a new type
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: description of the dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
