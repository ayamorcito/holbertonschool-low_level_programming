#include <stdlib.h>
#include "dog.h"


/**
 * init_dog - creates a new doggo
 * @d: pointer to the struct dog
 * @name: name of the doggo
 * @age: age of the doggo
 * @owner: human partner of the doggo
 * Return: 0 allways if correct
 */



void init_dog(struct dog *d, char *name, float age, char *owner)

{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
