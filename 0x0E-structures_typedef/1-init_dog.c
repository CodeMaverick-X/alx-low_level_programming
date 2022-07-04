#include "dog.h"
#include <stdio.h>
/**
 * init_dog - initialises a variable of type dog
 *
 * @d: dog
 * @name: name of the dog
 * @age: age of the dpg
 * @owner: owner of the dog
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		;
	else
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
