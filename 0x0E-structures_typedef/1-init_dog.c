#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initiale variable dog
 * @name: name to inisialize
 * @age : age toinitialize
 * @owner: first owner
 * @d: pointer to struct
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
