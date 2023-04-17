#include "dog.h"

/**
* new_dog - function creates a new dog
*@name: new dog's name
*@age: new dog's age
*@owner: new dog's owner
*Return: a new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_pointer = malloc(sizeof(dog_t));

	if (new_dog_pointer == NULL)
		return (NULL);

	new_dog_pointer->owner = malloc(strlen(owner) + 1);
	new_dog_pointer->name = malloc(strlen(owner) + 1);

	if (new_dog_pointer->owner == NULL || new_dog_pointer->name == NULL)
	{
		free(new_dog_pointer);
		free(new_dog_pointer->name);
		free(new_dog_pointer->owner);
		return (NULL);
	}
	new_dog_pointer->age = age;
	strcpy(new_dog_pointer->owner, owner);
	strcpy(new_dog_pointer->name, name);

	return (new_dog_pointer);
}
