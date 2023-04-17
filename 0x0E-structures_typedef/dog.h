#ifndef _BOARDER_
#define _BOARDER_
/**
* struct dog - Dog features
* @name: First member
* @age: Second member
* @owner: Third member
*
* Description: Longer description
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct dog dog_t;

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
