#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees the dog class and its constituents
 * @d: the class dog
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (!d)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
