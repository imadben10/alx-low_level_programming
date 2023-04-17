#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
* new_dog - creates a new dog
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
* Return: pointer to new dog, or NULL on failure
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
char *name_copy, *owner_copy;
int name_len, owner_len;
/* Allocate memory for the new dog */
new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);
/* Copy the name string */
for (name_len = 0; name[name_len] != '\0'; name_len++)
;
name_copy = malloc(sizeof(char) * (name_len + 1));
if (name_copy == NULL)
{
free(new_dog);
return (NULL);
}
for (name_len = 0; name[name_len] != '\0'; name_len++)
name_copy[name_len] = name[name_len];
name_copy[name_len] = '\0';
/* Copy the owner string */
for (owner_len = 0; owner[owner_len] != '\0'; owner_len++)
;
owner_copy = malloc(sizeof(char) * (owner_len + 1));
if (owner_copy == NULL)
{
free(name_copy);
free(new_dog);
return (NULL);
}
for (owner_len = 0; owner[owner_len] != '\0'; owner_len++)
owner_copy[owner_len] = owner[owner_len];
owner_copy[owner_len] = '\0';
/* Set the values of the new dog */
new_dog->name = name_copy;
new_dog->age = age;
new_dog->owner = owner_copy;
return (new_dog);
}
