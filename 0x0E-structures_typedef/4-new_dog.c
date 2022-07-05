#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - function that creates a new dog.
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int size_nm, size_own, i;
	dog_t *d1;

	d1 = malloc(sizeof(dog_t));
	if (d1 == NULL)
		return (NULL);
/*get the lenght of the string owner and name*/
	for (size_nm = 0; name[size_nm] != '\0';)
		size_nm++;
	for (size_own = 0; name[size_own] != '\0';)
		size_own++;
/*allocate space for the member name and owner*/
	d1->name = malloc(size_nm * sizeof(d1->name));
	if (d1->name == NULL)
	{
		free(d1);
		return (NULL);
	}
	d1->owner = malloc(size_own * sizeof(d1->owner));
	if (d1->owner == NULL)
	{
		free(d1->name);
		free(d1);
		return (NULL);
	}
/*initialize the values of the strings*/
	for (i = 0; i <= size_nm; i++)
		d1->name[i] = name[i];
	for (i = 0; i <= size_own; i++)
		d1->owner[i] = owner[i];
	d1->age = age;
	return (d1);

}
