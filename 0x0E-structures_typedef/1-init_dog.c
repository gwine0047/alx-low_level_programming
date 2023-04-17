#include "dog.h"
/**
 * init_dog - function for initializing dog features
 * @d: type of dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: null.
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
